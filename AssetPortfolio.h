#ifndef ASSETPORTFOLIO_H
#define ASSETPORTFOLIO_H

#include <string>
#include <vector>
#include "Asset.h"

class AssetPortfolio {
public:
    AssetPortfolio();
    AssetPortfolio(int size);
    ~AssetPortfolio();

    int get_num_assets() const;
    bool has_asset(std::string product) const;
    Asset *get_assets();
    bool add_asset(Asset new_asset);

private:
    int max_size;
    std::vector<Asset> assets;
};

#endif // ASSETPORTFOLIO_H
