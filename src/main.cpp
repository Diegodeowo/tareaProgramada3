#include "producto.h"
#include "inventarioTienda.h"

#include "./excepciones/excepcionID.h"
#include "./excepciones/excepcionNombre.h"
#include "./excepciones/excepcionDispo.h"

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {

    try{
    Producto *producto1 = new Producto(1,"Teclado",20);
    Producto *producto2 = new Producto(2,"Mouse",10);
    Producto *producto3 = new Producto(3,"Monitor",22);
    Producto *producto4 = new Producto(4,"Microfono",0);

    InventarioTienda *inventarioTienda = new InventarioTienda();
    inventarioTienda->AgregarProducto(producto1);
    inventarioTienda->AgregarProducto(producto2);
    inventarioTienda->AgregarProducto(producto3);
    inventarioTienda->AgregarProducto(producto4);


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
    catch(const ExcepcionNombre& e)
    {
        std::cerr << "Ingrese un nombre que no sea en blanco" << e.what() << '\n';
    }
    catch(const ExcepcionID& e)
    {
        std::cerr << "Ingrese un ID mayor a 0 " << e.what() << '\n';
    }
    catch(const ExcepcionDispo& e)
    {
        std::cerr << "Ingrese un numero de disponibilidad mayor a 0." << e.what() << '\n';
    }
    catch(const std::exception& e)
    {
        std::cerr << "Error al ejecutar el programa. " << e.what() << '\n';
    }

    {
        fstream myFile;
        myFile.open("inventario.dat", ios::in); 
        if (myFile.is_open()){
            string line;
            while (getline(myFile,line)){
                cout << line << endl;
            }
            myFile.close();
        } 
    }
}