#ifndef LIB_H
#define LIB_H

#include <string>
#include "inventarioTienda.h"
#include "producto.h"

using namespace std;

    class Lib
    {

        public:

        string consultarNombre(char nombre[15]);
        string consultarDireccionWeb(char direccionWeb[24]);
        string consultarDireccionFisica(char direccionFisica[24]);
        string consultarTelefono(char telefono[8]);

    };


#endif  