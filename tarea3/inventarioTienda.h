#ifndef TIENDA_H
#define TIENDA_H

#include "producto.h"
#include <vector>

class InventarioTienda
{
    
    vector<Producto *> inventarioTienda;

    public:
    InventarioTienda();

    void agregarProducto(Producto *p1);
    string getInventarioTienda();

};

#endif
