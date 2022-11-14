#pragma once

#include "donde/definitions.h"
#include "donde/search/api.h"
#include "donde/search_manager/api.h"
#include "donde/utils.h"

#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

class ShardManagerImpl : public ShardManager {

  public:
    ShardManagerImpl(search::Driver& driver, ShardFactory* factory);
    ~ShardManagerImpl() = default;

    std::tuple<Shard*, bool> FindOrCreateWritableShard(std::string db_id,
                                                       uint64 fts_count) override;

    RetCode AssignWorkerToShard(Shard* shard, Worker* worker) override;

    std::vector<search::DBItem> ListUserDBs() override;

    std::vector<Shard*> ListShards(std::string db_id) override;

    RetCode CloseShard(std::string db_id, std::string shard_id) override;

    std::string CreateShard(search::DBShard shard_info) override;

    RetCode UpdateShard(search::DBShard shard_info) override;

  private:
    RetCode load_db_shards();

  private:
    std::unordered_map<std::string, std::vector<Shard*>> _db_shards;

    std::unordered_map<std::string, search::DBItem> _user_dbs;

    search::Driver& _driver;
    std::shared_ptr<ShardFactory> _shard_factory;
};