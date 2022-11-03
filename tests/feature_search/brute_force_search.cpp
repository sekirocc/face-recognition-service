#include "search/impl/brute_force_searcher.h"
#include "search/impl/simple_driver.h"
#include "types.h"
#include "utils.h"

#include <cstdlib>
#include <doctest/doctest.h>
#include <filesystem>
#include <iostream>
#include <memory>
#include <nlohmann/json.hpp>
#include <ostream>

using namespace std;

using nlohmann::json;

TEST_CASE("BruteForceSearch. ") {

    const int feature_count = 100;
    const int dim = 512;

    std::vector<search::FeatureDbItem> fts;
    for (int i = 0; i < feature_count; i++) {
        auto ft = gen_feature_dim<dim>();
        std::map<string, string> meta{{"keya", "valueb"}};
        fts.push_back(search::FeatureDbItem{
            .feature = ft,
            .metadata = meta,
        });
    }

    // setup
    search::SimpleDriver store("/tmp/test_store");

    search::DBItem db1{
        .name = "test-db1",
        .description = "this is a test db",
        .capacity = 1024,
    };

    std::string db_id = store.CreateDB(db1);

    search::BruteForceSearcher search(store);

    // preapre features in db.
    std::vector<std::string> feature_ids = search.AddFeatures(db_id, fts);
    CHECK(feature_ids.size() == feature_count);

    SUBCASE("Search topk features.") {
        // query is the first one. so that we definitely can find matched fts.
        Feature query{fts[0].feature};

        int topk = 10;
        std::vector<search::FeatureSearchItem> search_result
            = search.SearchFeature(db_id, query, topk);

        for (const auto& r : search_result) {
            std::cout << "score: " << r.score << std::endl;
        }

        CHECK(search_result.size() == topk);

        if (int(search_result.size()) == topk) {
            // the most near ft.
            auto t = search_result[0];
            CHECK(t.score > 0.99);

            // query.debugPrint();
            // t.target.debugPrint();

            for (size_t i = 0; i < t.target.raw.size(); i++) {
                CHECK(t.target.raw[i] == fts[0].feature.raw[i]);
            }
        }
    }

    // cleanup db file
    std::filesystem::remove_all("/tmp/test_store/");

    CHECK("aa" == "aa");
}
