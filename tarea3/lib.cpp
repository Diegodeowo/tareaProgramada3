#include "lib.h"
#include <string>
#include <iostream>

using namespace std;


string Lib::consultarNombre(string nombre)
{
    return nombre;
}

string Lib::consultarDireccionWeb(string nombre)
{
    return "https://"+nombre+".com";
}

string Lib::consultarDireccion(string direccion)
{
    return direccion;
}

string Lib::consultarTelefono(string telefono)
{
    return telefono;
}


