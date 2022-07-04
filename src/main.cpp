#include "producto.h"
#include "inventarioTienda.h"

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {

    Producto *producto1 = new Producto(1,"Carro",20);
    Producto *producto2 = new Producto(2,"PC",25);
    Producto *producto3 = new Producto(3,"BB",22);
    Producto *producto4 = new Producto(4,"IDK",20);

    InventarioTienda *inventarioTienda = new InventarioTienda();
    inventarioTienda->AgregarProducto(producto1);
    inventarioTienda->AgregarProducto(producto2);
    inventarioTienda->AgregarProducto(producto3);
    inventarioTienda->AgregarProducto(producto4);

    inventarioTienda->getInventarioTienda();

    ofstream archivoSalida;
    archivoSalida.open("inventario.dat", ios::out|ios::binary);

    if (!archivoSalida.is_open())
    {
        cerr << "ERROR AL ABRIR EL ARCHIVO.DAT";
        return -1;
    }

    inventarioTienda->GuardarEnStreamBinario(&archivoSalida);

    archivoSalida.close();

    delete inventarioTienda;
}