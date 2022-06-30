#include "lib.h"
#include <string>
#include <iostream>

using namespace std;


string Lib::consultarNombre(char nombre[15])
{
    return string {nombre};
}

string Lib::consultarDireccionWeb(char direccionWeb[24])
{
    return string {direccionWeb};
}

string Lib::consultarDireccionFisica(char direccionFisica[24])
{
    return string {direccionFisica};
}

string Lib::consultarTelefono(char telefono[8])
{
    return string {telefono};
}