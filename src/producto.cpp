#include "producto.h"
#include <string>
#include <string.h>
#include <iostream>

// string productoNombre = "";

Producto::Producto(int ID, string nombreProducto, int existenciaProducto){
    this->ID = ID;
    strcpy(this->nombreProducto, nombreProducto.c_str());
    this->existenciaProducto = existenciaProducto;
    // productoNombre = strcpy(this->nombreProducto, nombreProducto.c_str());
}

Producto::Producto(){
    this->ID = 0;
    this->existenciaProducto = 0;
    strcpy(this->nombreProducto, "");
}


ostream& operator << (ostream &o, const Producto *producto)
{
    o << "[" << producto->ID << "] - " << producto->nombreProducto << " " << producto->existenciaProducto;  
    return o;
}


// string Producto::productoToString(){
//     string toString = "";
//     toString = "ID: "+ this->ID;
//     toString += " Nombre: "+ nombreProducto;
//     toString += " Existencias: "+ this->existenciaProducto;

//     return toString;
// }