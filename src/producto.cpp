#include "producto.h"
#include "./excepciones/excepcionID.h"
#include "./excepciones/excepcionNombre.h"
#include "./excepciones/excepcionDispo.h"

#include <string>
#include <string.h>
#include <iostream>

Producto::Producto(int ID, string nombreProducto, int existenciaProducto){
    if (this->ID > 0 )
    {
        throw ExcepcionID();
    }

    if (this->nombreProducto == "")
    {
        throw ExcepcionID();
    }

    if (this->existenciaProducto < 0)
    {
        throw ExcepcionDispo();
    }
    this->ID = ID;
    strcpy(this->nombreProducto, nombreProducto.c_str());
    this->existenciaProducto = existenciaProducto;
}

Producto::Producto(){
    this->ID = 0;
    this->existenciaProducto = 0;
    strcpy(this->nombreProducto, "");


}

ostream& operator << (ostream &o, const Producto *producto){
    o << "[" << producto->ID << "] - " << producto->nombreProducto << " " << producto->existenciaProducto;  
    return o;
}

