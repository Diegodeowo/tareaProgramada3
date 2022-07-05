#ifndef INVENTARIOTIENDA_H
#define INVENTARIOTIENDA_H

#include "producto.h"
#include <vector>
#include <fstream>


class InventarioTienda
{
    public:
    vector<Producto *> tiendaInventario;

    InventarioTienda();
    ~InventarioTienda();

    void AgregarProducto(Producto *p1);
    void GuardarEnStreamBinario(ostream *streamSalida);    
};

#endif
