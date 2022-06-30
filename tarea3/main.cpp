#include "producto.h"
#include "inventarioTienda.h"

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {

    Producto *producto1 = new Producto(1, "Carro",20);
    Producto *producto2 = new Producto(2, "PC",25);
    Producto *producto3 = new Producto(3, "BB",22);
    Producto *producto4 = new Producto(4, "IDK",2022);

    InventarioTienda *inventarioTienda = new InventarioTienda();
    inventarioTienda->AgregarProducto(producto1);
    inventarioTienda->AgregarProducto(producto2);
    inventarioTienda->AgregarProducto(producto3);
    inventarioTienda->AgregarProducto(producto4);

    ofstream archivoSalida;
    archivoSalida.open("inventario.dat", ios::out|ios::binary);

    if (!archivoSalida.is_open())
    {
        cerr << "No se pudo abrir archivo planilla.dat para escribir los datos";
        return -1;
    }

    inventarioTienda->GuardarEnStreamBinario(&archivoSalida);

    archivoSalida.close();

    delete inventarioTienda;

    // Ejemplo de leer una planilla desde un archivo binario
    // ifstream archivoEntrada;
    // archivoEntrada.open("planilla.dat", ios::in|ios::binary);

    // if (!archivoEntrada.is_open())
    // {
    //     cerr << "No se pudo abrir archivo planilla.dat para leer los datos";
    //     return -1;
    // }
    
    // Planilla *planilla = new Planilla();

    // planilla->CargarDesdeStreamBinario(&archivoEntrada);

    // cout << planilla;

    // delete planilla;

    // archivoEntrada.close();
}