// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: feature_search.proto

#include "feature_search.pb.h"
#include "feature_search.grpc.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>
namespace com {
namespace sekirocc {
namespace feature_search {

static const char* FeatureSearchManager_method_names[] = {
  "/com.sekirocc.feature_search.FeatureSearchManager/DBNew",
  "/com.sekirocc.feature_search.FeatureSearchManager/DBList",
  "/com.sekirocc.feature_search.FeatureSearchManager/DBGet",
  "/com.sekirocc.feature_search.FeatureSearchManager/DBDelete",
  "/com.sekirocc.feature_search.FeatureSearchManager/AddFeature",
  "/com.sekirocc.feature_search.FeatureSearchManager/DeleteFeature",
  "/com.sekirocc.feature_search.FeatureSearchManager/SearchFeature",
};

std::unique_ptr< FeatureSearchManager::Stub> FeatureSearchManager::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< FeatureSearchManager::Stub> stub(new FeatureSearchManager::Stub(channel, options));
  return stub;
}

FeatureSearchManager::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options)
  : channel_(channel), rpcmethod_DBNew_(FeatureSearchManager_method_names[0], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_DBList_(FeatureSearchManager_method_names[1], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_DBGet_(FeatureSearchManager_method_names[2], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_DBDelete_(FeatureSearchManager_method_names[3], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_AddFeature_(FeatureSearchManager_method_names[4], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_DeleteFeature_(FeatureSearchManager_method_names[5], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_SearchFeature_(FeatureSearchManager_method_names[6], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status FeatureSearchManager::Stub::DBNew(::grpc::ClientContext* context, const ::com::sekirocc::feature_search::DBNewRequest& request, ::com::sekirocc::feature_search::DBNewResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::com::sekirocc::feature_search::DBNewRequest, ::com::sekirocc::feature_search::DBNewResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_DBNew_, context, request, response);
}

void FeatureSearchManager::Stub::async::DBNew(::grpc::ClientContext* context, const ::com::sekirocc::feature_search::DBNewRequest* request, ::com::sekirocc::feature_search::DBNewResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::com::sekirocc::feature_search::DBNewRequest, ::com::sekirocc::feature_search::DBNewResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_DBNew_, context, request, response, std::move(f));
}

void FeatureSearchManager::Stub::async::DBNew(::grpc::ClientContext* context, const ::com::sekirocc::feature_search::DBNewRequest* request, ::com::sekirocc::feature_search::DBNewResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_DBNew_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::com::sekirocc::feature_search::DBNewResponse>* FeatureSearchManager::Stub::PrepareAsyncDBNewRaw(::grpc::ClientContext* context, const ::com::sekirocc::feature_search::DBNewRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::com::sekirocc::feature_search::DBNewResponse, ::com::sekirocc::feature_search::DBNewRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_DBNew_, context, request);
}

::grpc::ClientAsyncResponseReader< ::com::sekirocc::feature_search::DBNewResponse>* FeatureSearchManager::Stub::AsyncDBNewRaw(::grpc::ClientContext* context, const ::com::sekirocc::feature_search::DBNewRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncDBNewRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status FeatureSearchManager::Stub::DBList(::grpc::ClientContext* context, const ::com::sekirocc::feature_search::DBListRequest& request, ::com::sekirocc::feature_search::DBListResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::com::sekirocc::feature_search::DBListRequest, ::com::sekirocc::feature_search::DBListResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_DBList_, context, request, response);
}

void FeatureSearchManager::Stub::async::DBList(::grpc::ClientContext* context, const ::com::sekirocc::feature_search::DBListRequest* request, ::com::sekirocc::feature_search::DBListResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::com::sekirocc::feature_search::DBListRequest, ::com::sekirocc::feature_search::DBListResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_DBList_, context, request, response, std::move(f));
}

void FeatureSearchManager::Stub::async::DBList(::grpc::ClientContext* context, const ::com::sekirocc::feature_search::DBListRequest* request, ::com::sekirocc::feature_search::DBListResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_DBList_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::com::sekirocc::feature_search::DBListResponse>* FeatureSearchManager::Stub::PrepareAsyncDBListRaw(::grpc::ClientContext* context, const ::com::sekirocc::feature_search::DBListRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::com::sekirocc::feature_search::DBListResponse, ::com::sekirocc::feature_search::DBListRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_DBList_, context, request);
}

::grpc::ClientAsyncResponseReader< ::com::sekirocc::feature_search::DBListResponse>* FeatureSearchManager::Stub::AsyncDBListRaw(::grpc::ClientContext* context, const ::com::sekirocc::feature_search::DBListRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncDBListRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status FeatureSearchManager::Stub::DBGet(::grpc::ClientContext* context, const ::com::sekirocc::feature_search::DBGetRequest& request, ::com::sekirocc::feature_search::DBGetResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::com::sekirocc::feature_search::DBGetRequest, ::com::sekirocc::feature_search::DBGetResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_DBGet_, context, request, response);
}

void FeatureSearchManager::Stub::async::DBGet(::grpc::ClientContext* context, const ::com::sekirocc::feature_search::DBGetRequest* request, ::com::sekirocc::feature_search::DBGetResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::com::sekirocc::feature_search::DBGetRequest, ::com::sekirocc::feature_search::DBGetResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_DBGet_, context, request, response, std::move(f));
}

void FeatureSearchManager::Stub::async::DBGet(::grpc::ClientContext* context, const ::com::sekirocc::feature_search::DBGetRequest* request, ::com::sekirocc::feature_search::DBGetResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_DBGet_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::com::sekirocc::feature_search::DBGetResponse>* FeatureSearchManager::Stub::PrepareAsyncDBGetRaw(::grpc::ClientContext* context, const ::com::sekirocc::feature_search::DBGetRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::com::sekirocc::feature_search::DBGetResponse, ::com::sekirocc::feature_search::DBGetRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_DBGet_, context, request);
}

::grpc::ClientAsyncResponseReader< ::com::sekirocc::feature_search::DBGetResponse>* FeatureSearchManager::Stub::AsyncDBGetRaw(::grpc::ClientContext* context, const ::com::sekirocc::feature_search::DBGetRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncDBGetRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status FeatureSearchManager::Stub::DBDelete(::grpc::ClientContext* context, const ::com::sekirocc::feature_search::DBDeleteRequest& request, ::com::sekirocc::feature_search::DBDeleteResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::com::sekirocc::feature_search::DBDeleteRequest, ::com::sekirocc::feature_search::DBDeleteResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_DBDelete_, context, request, response);
}

void FeatureSearchManager::Stub::async::DBDelete(::grpc::ClientContext* context, const ::com::sekirocc::feature_search::DBDeleteRequest* request, ::com::sekirocc::feature_search::DBDeleteResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::com::sekirocc::feature_search::DBDeleteRequest, ::com::sekirocc::feature_search::DBDeleteResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_DBDelete_, context, request, response, std::move(f));
}

void FeatureSearchManager::Stub::async::DBDelete(::grpc::ClientContext* context, const ::com::sekirocc::feature_search::DBDeleteRequest* request, ::com::sekirocc::feature_search::DBDeleteResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_DBDelete_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::com::sekirocc::feature_search::DBDeleteResponse>* FeatureSearchManager::Stub::PrepareAsyncDBDeleteRaw(::grpc::ClientContext* context, const ::com::sekirocc::feature_search::DBDeleteRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::com::sekirocc::feature_search::DBDeleteResponse, ::com::sekirocc::feature_search::DBDeleteRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_DBDelete_, context, request);
}

::grpc::ClientAsyncResponseReader< ::com::sekirocc::feature_search::DBDeleteResponse>* FeatureSearchManager::Stub::AsyncDBDeleteRaw(::grpc::ClientContext* context, const ::com::sekirocc::feature_search::DBDeleteRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncDBDeleteRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status FeatureSearchManager::Stub::AddFeature(::grpc::ClientContext* context, const ::com::sekirocc::feature_search::AddFeatureRequest& request, ::com::sekirocc::feature_search::AddFeatureResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::com::sekirocc::feature_search::AddFeatureRequest, ::com::sekirocc::feature_search::AddFeatureResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_AddFeature_, context, request, response);
}

void FeatureSearchManager::Stub::async::AddFeature(::grpc::ClientContext* context, const ::com::sekirocc::feature_search::AddFeatureRequest* request, ::com::sekirocc::feature_search::AddFeatureResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::com::sekirocc::feature_search::AddFeatureRequest, ::com::sekirocc::feature_search::AddFeatureResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_AddFeature_, context, request, response, std::move(f));
}

void FeatureSearchManager::Stub::async::AddFeature(::grpc::ClientContext* context, const ::com::sekirocc::feature_search::AddFeatureRequest* request, ::com::sekirocc::feature_search::AddFeatureResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_AddFeature_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::com::sekirocc::feature_search::AddFeatureResponse>* FeatureSearchManager::Stub::PrepareAsyncAddFeatureRaw(::grpc::ClientContext* context, const ::com::sekirocc::feature_search::AddFeatureRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::com::sekirocc::feature_search::AddFeatureResponse, ::com::sekirocc::feature_search::AddFeatureRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_AddFeature_, context, request);
}

::grpc::ClientAsyncResponseReader< ::com::sekirocc::feature_search::AddFeatureResponse>* FeatureSearchManager::Stub::AsyncAddFeatureRaw(::grpc::ClientContext* context, const ::com::sekirocc::feature_search::AddFeatureRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncAddFeatureRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status FeatureSearchManager::Stub::DeleteFeature(::grpc::ClientContext* context, const ::com::sekirocc::feature_search::DeleteFeatureRequest& request, ::com::sekirocc::feature_search::DeleteFeatureResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::com::sekirocc::feature_search::DeleteFeatureRequest, ::com::sekirocc::feature_search::DeleteFeatureResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_DeleteFeature_, context, request, response);
}

void FeatureSearchManager::Stub::async::DeleteFeature(::grpc::ClientContext* context, const ::com::sekirocc::feature_search::DeleteFeatureRequest* request, ::com::sekirocc::feature_search::DeleteFeatureResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::com::sekirocc::feature_search::DeleteFeatureRequest, ::com::sekirocc::feature_search::DeleteFeatureResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_DeleteFeature_, context, request, response, std::move(f));
}

void FeatureSearchManager::Stub::async::DeleteFeature(::grpc::ClientContext* context, const ::com::sekirocc::feature_search::DeleteFeatureRequest* request, ::com::sekirocc::feature_search::DeleteFeatureResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_DeleteFeature_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::com::sekirocc::feature_search::DeleteFeatureResponse>* FeatureSearchManager::Stub::PrepareAsyncDeleteFeatureRaw(::grpc::ClientContext* context, const ::com::sekirocc::feature_search::DeleteFeatureRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::com::sekirocc::feature_search::DeleteFeatureResponse, ::com::sekirocc::feature_search::DeleteFeatureRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_DeleteFeature_, context, request);
}

::grpc::ClientAsyncResponseReader< ::com::sekirocc::feature_search::DeleteFeatureResponse>* FeatureSearchManager::Stub::AsyncDeleteFeatureRaw(::grpc::ClientContext* context, const ::com::sekirocc::feature_search::DeleteFeatureRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncDeleteFeatureRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status FeatureSearchManager::Stub::SearchFeature(::grpc::ClientContext* context, const ::com::sekirocc::feature_search::SearchFeatureRequest& request, ::com::sekirocc::feature_search::SearchFeatureResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::com::sekirocc::feature_search::SearchFeatureRequest, ::com::sekirocc::feature_search::SearchFeatureResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_SearchFeature_, context, request, response);
}

void FeatureSearchManager::Stub::async::SearchFeature(::grpc::ClientContext* context, const ::com::sekirocc::feature_search::SearchFeatureRequest* request, ::com::sekirocc::feature_search::SearchFeatureResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::com::sekirocc::feature_search::SearchFeatureRequest, ::com::sekirocc::feature_search::SearchFeatureResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_SearchFeature_, context, request, response, std::move(f));
}

void FeatureSearchManager::Stub::async::SearchFeature(::grpc::ClientContext* context, const ::com::sekirocc::feature_search::SearchFeatureRequest* request, ::com::sekirocc::feature_search::SearchFeatureResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_SearchFeature_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::com::sekirocc::feature_search::SearchFeatureResponse>* FeatureSearchManager::Stub::PrepareAsyncSearchFeatureRaw(::grpc::ClientContext* context, const ::com::sekirocc::feature_search::SearchFeatureRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::com::sekirocc::feature_search::SearchFeatureResponse, ::com::sekirocc::feature_search::SearchFeatureRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_SearchFeature_, context, request);
}

::grpc::ClientAsyncResponseReader< ::com::sekirocc::feature_search::SearchFeatureResponse>* FeatureSearchManager::Stub::AsyncSearchFeatureRaw(::grpc::ClientContext* context, const ::com::sekirocc::feature_search::SearchFeatureRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncSearchFeatureRaw(context, request, cq);
  result->StartCall();
  return result;
}

FeatureSearchManager::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      FeatureSearchManager_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< FeatureSearchManager::Service, ::com::sekirocc::feature_search::DBNewRequest, ::com::sekirocc::feature_search::DBNewResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](FeatureSearchManager::Service* service,
             ::grpc::ServerContext* ctx,
             const ::com::sekirocc::feature_search::DBNewRequest* req,
             ::com::sekirocc::feature_search::DBNewResponse* resp) {
               return service->DBNew(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      FeatureSearchManager_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< FeatureSearchManager::Service, ::com::sekirocc::feature_search::DBListRequest, ::com::sekirocc::feature_search::DBListResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](FeatureSearchManager::Service* service,
             ::grpc::ServerContext* ctx,
             const ::com::sekirocc::feature_search::DBListRequest* req,
             ::com::sekirocc::feature_search::DBListResponse* resp) {
               return service->DBList(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      FeatureSearchManager_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< FeatureSearchManager::Service, ::com::sekirocc::feature_search::DBGetRequest, ::com::sekirocc::feature_search::DBGetResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](FeatureSearchManager::Service* service,
             ::grpc::ServerContext* ctx,
             const ::com::sekirocc::feature_search::DBGetRequest* req,
             ::com::sekirocc::feature_search::DBGetResponse* resp) {
               return service->DBGet(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      FeatureSearchManager_method_names[3],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< FeatureSearchManager::Service, ::com::sekirocc::feature_search::DBDeleteRequest, ::com::sekirocc::feature_search::DBDeleteResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](FeatureSearchManager::Service* service,
             ::grpc::ServerContext* ctx,
             const ::com::sekirocc::feature_search::DBDeleteRequest* req,
             ::com::sekirocc::feature_search::DBDeleteResponse* resp) {
               return service->DBDelete(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      FeatureSearchManager_method_names[4],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< FeatureSearchManager::Service, ::com::sekirocc::feature_search::AddFeatureRequest, ::com::sekirocc::feature_search::AddFeatureResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](FeatureSearchManager::Service* service,
             ::grpc::ServerContext* ctx,
             const ::com::sekirocc::feature_search::AddFeatureRequest* req,
             ::com::sekirocc::feature_search::AddFeatureResponse* resp) {
               return service->AddFeature(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      FeatureSearchManager_method_names[5],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< FeatureSearchManager::Service, ::com::sekirocc::feature_search::DeleteFeatureRequest, ::com::sekirocc::feature_search::DeleteFeatureResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](FeatureSearchManager::Service* service,
             ::grpc::ServerContext* ctx,
             const ::com::sekirocc::feature_search::DeleteFeatureRequest* req,
             ::com::sekirocc::feature_search::DeleteFeatureResponse* resp) {
               return service->DeleteFeature(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      FeatureSearchManager_method_names[6],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< FeatureSearchManager::Service, ::com::sekirocc::feature_search::SearchFeatureRequest, ::com::sekirocc::feature_search::SearchFeatureResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](FeatureSearchManager::Service* service,
             ::grpc::ServerContext* ctx,
             const ::com::sekirocc::feature_search::SearchFeatureRequest* req,
             ::com::sekirocc::feature_search::SearchFeatureResponse* resp) {
               return service->SearchFeature(ctx, req, resp);
             }, this)));
}

FeatureSearchManager::Service::~Service() {
}

::grpc::Status FeatureSearchManager::Service::DBNew(::grpc::ServerContext* context, const ::com::sekirocc::feature_search::DBNewRequest* request, ::com::sekirocc::feature_search::DBNewResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status FeatureSearchManager::Service::DBList(::grpc::ServerContext* context, const ::com::sekirocc::feature_search::DBListRequest* request, ::com::sekirocc::feature_search::DBListResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status FeatureSearchManager::Service::DBGet(::grpc::ServerContext* context, const ::com::sekirocc::feature_search::DBGetRequest* request, ::com::sekirocc::feature_search::DBGetResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status FeatureSearchManager::Service::DBDelete(::grpc::ServerContext* context, const ::com::sekirocc::feature_search::DBDeleteRequest* request, ::com::sekirocc::feature_search::DBDeleteResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status FeatureSearchManager::Service::AddFeature(::grpc::ServerContext* context, const ::com::sekirocc::feature_search::AddFeatureRequest* request, ::com::sekirocc::feature_search::AddFeatureResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status FeatureSearchManager::Service::DeleteFeature(::grpc::ServerContext* context, const ::com::sekirocc::feature_search::DeleteFeatureRequest* request, ::com::sekirocc::feature_search::DeleteFeatureResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status FeatureSearchManager::Service::SearchFeature(::grpc::ServerContext* context, const ::com::sekirocc::feature_search::SearchFeatureRequest* request, ::com::sekirocc::feature_search::SearchFeatureResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace com
}  // namespace sekirocc
}  // namespace feature_search
