#include "search/storage.h"
#include "types.h"
#include "utils.h"

#include <iostream>
#include <ostream>

#include <doctest/doctest.h>
#include <filesystem>
#include <memory>
#include <nlohmann/json.hpp>

using namespace std;

using nlohmann::json;

template <int size>
Feature gen_feature_dim() {
    std::vector<float> raw(size);
    for (int i = 0; i < size; i++) {
        // 0.000 ~ 0.512
        raw[i] = 0.001 * i;
    }
    return Feature(std::move(raw), "test-model-face", size);
}



TEST_CASE("Feature file can be stored, loaded, and removed.") {

    json conf = R"(
{
		    "path": "/tmp/test_store/"
})"_json;

    const int dim = 512;
    search::FileSystemStorage store(conf);
    store.Init();

    std::vector<Feature> fts;
    for (int i = 0; i < 2; i++) {
        auto ft = gen_feature_dim<dim>();
        fts.push_back(ft);
    }

    std::cout << "in file_system_storage.cpp[test] feature length: "<< fts.size() << std::endl;

    std::vector<std::string> feature_ids = store.AddFeatures(fts);
    CHECK(feature_ids.size() == 2);

    // db file exists
    std::string db_filepath = "/tmp/test_store/meta/sqlite3.db";
    CHECK(std::filesystem::exists(db_filepath) == true);

    // file exists
    for (auto& id : feature_ids) {
        std::string p1("/tmp/test_store/data/" + id + ".ft");
        CHECK(std::filesystem::exists(p1) == true);
    }

    std::vector<std::string> listed = store.ListFeautreIDs(0, 10);
    CHECK(listed.size() == 2);

    std::vector<Feature> loaded_features = store.LoadFeatures(feature_ids);
    for (size_t i = 0; i < dim; i ++) {
        CHECK(fts[0].raw[i] == loaded_features[0].raw[i]);
    }

    store.RemoveFeatures(feature_ids);

    // file removed
    for (auto& id : feature_ids) {
        std::string p1("/tmp/test_store/data/" + id + ".ft");
        CHECK(std::filesystem::exists(p1) == false);
    }

    // cleanup db file
    std::filesystem::remove_all("/tmp/test_store/");

    CHECK("aa" == "aa");
};
