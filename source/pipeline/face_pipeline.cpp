#include "face_pipeline.h"

#include "Poco/Logger.h"
#include "Poco/Thread.h"
#include "concurrent_processor.h"
#include "nlohmann/json.hpp"
#include "spdlog/spdlog.h"
#include "types.h"

#include <cstdint>
#include <memory>
#include <opencv2/core/mat.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/opencv.hpp>

using namespace std;

using Poco::Logger;

using json = nlohmann::json;

/**
   json conf:
   {
       "detector": {
           "model": "xxxx.bin"
       },
       "aligner": {
           "model": "xxxx.bin"
       },
       "landmarks": {
           "model": "xxxx.bin"
       },
       "feature": {
           "model": "xxxx.bin"
       }
   }
 */

FacePipeline::FacePipeline(const json& conf, const std::string& device_id)
    : _config(conf), _device_id(device_id) {}

RetCode FacePipeline::Init(std::shared_ptr<Processor> detectorProcessor,
                           std::shared_ptr<Processor> alignerProcessor,
                           std::shared_ptr<Processor> landmarksProcessor,
                           std::shared_ptr<Processor> featureProcessor) {
    _detectorProcessor = detectorProcessor;
    _landmarksProcessor = landmarksProcessor;
    _alignerProcessor = alignerProcessor;
    _featureProcessor = featureProcessor;

    // Value *v = new Value;
    // v->valueType = ValueFrame;
    // v->valuePtr = &Frame{};
    // conf["id"] = reinterpret_cast<std::uintptr_t>(v);

    RetCode ret = _detectorProcessor->Init(_config["detector"]);

    // delete v;

    return RET_OK;
}

RetCode FacePipeline::Terminate() {
    RetCode ret = _detectorProcessor->Terminate();
    // _logger.information("processor terminate ret: %d\n", ret);

    return RET_OK;
}

std::shared_ptr<Frame> FacePipeline::Decode(const vector<uint8_t>& image_data) {
    cv::Mat image(cv::imdecode(image_data, cv::IMREAD_UNCHANGED));

    return std::make_shared<Frame>(image);
}

std::shared_ptr<DetectResult> FacePipeline::Detect(std::shared_ptr<Frame> frame) {
    Value input{ValueFrame, frame};
    // output.valuePtr memory is allocated by inner Process();
    Value output;

    RetCode ret = _detectorProcessor->Process(input, output);
    spdlog::info("FacePipeline::Detect ret: {}", ret);

    if (output.valueType != ValueDetectResult) {
        // _logger.error("Detect output is not ValueDetectResult, return empty result");
        return nullptr;
    }

    return std::static_pointer_cast<DetectResult>(output.valuePtr);
}
