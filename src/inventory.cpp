#include "inventory.h"
#include "utils/logger.h"
#include <iostream>

void Inventory::addProduct(const std::string& name, double price, int quantity) {
    products.push_back(Product(name, price, quantity));
    Logger::log("Producto agregado: " + name);
}

void Inventory::removeProduct(const std::string& name) {
    for (auto it = products.begin(); it != products.end(); ++it) {
        if (it->getName() == name) {
            products.erase(it);
            Logger::log("Producto eliminado: " + name);
            return;
        }
    }
    Logger::log("Producto no encontrado: " + name);
}

void Inventory::listProducts() const {
    std::cout << "Inventario:" << std::endl;
    for (const auto& product : products) {
        product.display();
    }
}
