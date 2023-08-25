#include "Asset.h"


Asset::Asset() : product_type_(""), value_(0) {}


Asset::Asset(int value, std::string product_type) : value_(value), product_type_(product_type) {}

std::string Asset::get_product_type() {
    return product_type_;
}

int Asset::get_value() {
    return value_;
}

// Destructor
Asset::~Asset() {}

