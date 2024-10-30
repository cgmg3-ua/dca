#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>

class Product {
public:
    Product(const std::string& name, double price, int quantity);
    const std::string& getName() const;
    void display() const;

private:
    std::string name;
    double price;
    int quantity;
};

#endif // PRODUCT_H
