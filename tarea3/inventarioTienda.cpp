#include "inventarioTienda.h"

InventarioTienda::InventarioTienda() {

}

void InventarioTienda::agregarProducto(Producto *p1) {
    this->inventarioTienda.push_back(p1);
}

string InventarioTienda::getInventarioTienda() {

    string inventarioTienda = "";
    for (Producto* p1 : this->inventarioTienda)
    {
        // totalInventarioTienda += p1->CalculateShipping();
    }

    return inventarioTienda;
}