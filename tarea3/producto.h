#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <string>

using namespace std;

class Producto 
{
    int ID;
    char nombreProducto[20];
    int existenciaProducto;

    public:
        Producto(int ID, string nombreProducto, int existenciaProducto);
        string productoToString();
};

#endif