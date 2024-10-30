#include "product.h"
#include <iostream>

Product::Product(const std::string& name, double price, int quantity)
    : name(name), price(price), quantity(quantity) {}

const std::string& Product::getName() const {
    return name;
}

void Product::display() const {
    std::cout << "Producto: " << name 
              << ", Precio: $" << price 
              << ", Cantidad: " << quantity << std::endl;
}
