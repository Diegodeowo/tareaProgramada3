#include <iostream>
#include "inventarioTienda.h"

InventarioTienda::InventarioTienda(){
    
}

InventarioTienda::~InventarioTienda(){
    for (Producto *producto : this->tiendaInventario){
        delete producto;
    }
}

void InventarioTienda::AgregarProducto(Producto *p1){
    this->tiendaInventario.push_back(p1);
}

void InventarioTienda::GuardarEnStreamBinario(ostream *streamSalida){
    for (Producto *producto : this->tiendaInventario)
    {
        streamSalida->write((char *)producto, sizeof(Producto));
    }
}


ostream& operator << (ostream &o, const InventarioTienda *inventarioTienda){
    o << "Inventario: " << std::endl;

    for (Producto *producto : inventarioTienda->tiendaInventario)
    {
        o << producto << endl;
    }
    
    return o;
}