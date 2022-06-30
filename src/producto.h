#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <string>

using namespace std;

class Producto 
{
    int ID;
    int existenciaProducto;
    char nombreProducto[20];

    public:
        Producto(int ID, string nombreProducto, int existenciaProducto);
        Producto();

        
        // string productoToString();
        friend ostream& operator << (ostream &o, const Producto *producto);

};

#endif