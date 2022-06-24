#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <string>

using namespace std;

class Producto {

    protected:
        string ID_Producto = "";
        string nombreProducto = "";
        int existencias = 0;

    public:
        virtual ~Producto();
        virtual int AgregarProducto() = 0;
};

#endif