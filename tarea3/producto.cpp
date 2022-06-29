#include "producto.h"
#include <string>
#include <string.h>

string productoNombre = "";

Producto::Producto(int ID, string nombreProducto, int existenciaProducto){
    this->ID = ID;
    strcpy(this->nombreProducto, nombreProducto.c_str());
    this->existenciaProducto = existenciaProducto;
    productoNombre = strcpy(this->nombreProducto, nombreProducto.c_str());
}

string Producto::productoToString(){
    string toString = "";
    toString = "ID: "+ this->ID;
    toString += " Nombre: "+ productoNombre;
    toString += " Existencias: "+ this->existenciaProducto;

    return toString;
}