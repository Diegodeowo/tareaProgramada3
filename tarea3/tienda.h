#ifndef TIENDA_H
#define TIENDA_H

#include "producto.h"
#include <vector>

class Tienda {

    vector<Producto *> tienda;

    public:
    Tienda();
    // ~Planilla();

    void addTienda(Producto *p1);
    double getTienda();

};

#endif