#include "AssetPortfolio.h"

AssetPortfolio::AssetPortfolio() : max_size(0) {}

AssetPortfolio::AssetPortfolio(int size) : max_size(size) {}

AssetPortfolio::~AssetPortfolio() {}

int AssetPortfolio::get_num_assets() const {
    return assets.size();
}

bool AssetPortfolio::has_asset(std::string product) const {
    for (const Asset &asset : assets) {
        if (asset.get_product() == product) {
            return true;
        }
    }
    return false;
}

Asset *AssetPortfolio::get_assets() {
    if (assets.empty()) {
        return nullptr;
    }
    return &assets[0];
}

bool AssetPortfolio::add_asset(Asset new_asset) {
    if (assets.size() < max_size) {
        assets.push_back(new_asset);
        return true;
    }
    return false;
}
