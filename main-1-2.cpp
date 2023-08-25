#include <iostream>
#include "AssetPortfolio.h"

int main() {
    AssetPortfolio portfolio(3);

    Asset asset1("Stock");
    Asset asset2("Bond");
    Asset asset3("Real Estate");

    portfolio.add_asset(asset1);
    portfolio.add_asset(asset2);
    portfolio.add_asset(asset3);

    std::cout << "Number of assets in portfolio: " << portfolio.get_num_assets() << std::endl;

    if (portfolio.has_asset("Stock")) {
        std::cout << "Portfolio has Stock asset." << std::endl;
    } else {
        std::cout << "Portfolio does not have Stock asset." << std::endl;
    }

    Asset *assets = portfolio.get_assets();
    if (assets) {
        std::cout << "Assets in the portfolio:" << std::endl;
        for (int i = 0; i < portfolio.get_num_assets(); ++i) {
            std::cout << "- " << assets[i].get_product() << std::endl;
        }
    } else {
        std::cout << "Portfolio is empty." << std::endl;
    }

    return 0;
}
