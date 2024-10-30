#ifndef INVENTORY_H
#define INVENTORY_H

#include "product.h"
#include <vector>
#include <string>

class Inventory {
public:
    void addProduct(const std::string& name, double price, int quantity);
    void removeProduct(const std::string& name);
    void listProducts() const;

private:
    std::vector<Product> products;
};

#endif // INVENTORY_H
