#ifndef TIENDA_H
#define TIENDA_H

#include "producto.h"
#include <vector>

class Tienda {

    vector<Producto *> shipList;

    public:
    Tienda();
    // ~Planilla();

    void add(Producto *p1);
    double getTienda();

};

#endif