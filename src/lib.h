#ifndef LIB_H
#define LIB_H

#include <string>
#include "inventarioTienda.h"
#include "producto.h"
#include <fstream>

using namespace std;


class Lib{
    char nombre[15];
    char direccionWeb[24];
    char direccionFisica[24];
    char telefono[8];

    public:
        string ConsultarNombre(string nombre);
        string ConsultarDireccionWeb(string direccionWeb);
        string ConsultarDireccionFisica(string direccionFisica);
        string ConsultarTelefono(string telefono);
    
};

#endif  