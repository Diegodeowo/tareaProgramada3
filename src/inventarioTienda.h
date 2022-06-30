#ifndef INVENTARIOTIENDA_H
#define INVENTARIOTIENDA_H

#include "producto.h"
#include <vector>

class InventarioTienda
{
    

    public:
    vector<Producto *> tiendaInventario;

    InventarioTienda();
    ~InventarioTienda();


    void AgregarProducto(Producto *p1);
    string getInventarioTienda();

    void GuardarEnStreamBinario(ostream *streamSalida);










};

#endif
