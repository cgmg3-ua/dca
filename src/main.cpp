#include <iostream>
#include "inventory.h"

int main() {
    Inventory inventory;

    // Agregar productos al inventario
    inventory.addProduct("Laptop", 1500.0, 5);
    inventory.addProduct("Smartphone", 800.0, 10);

    // Listar productos
    inventory.listProducts();

    // Eliminar un producto
    inventory.removeProduct("Laptop");

    // Listar productos nuevamente
    inventory.listProducts();

    return 0;
}
