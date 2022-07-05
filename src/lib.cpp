#include "lib.h"
#include <string>
#include <string.h>
#include <iostream>

using namespace std;


string Lib::ConsultarNombre(string nombre){
    return string {strcpy(this->nombre, nombre.c_str())};
}

string Lib::ConsultarDireccionWeb(string direccionWeb){
    return string {strcpy(this->direccionWeb, direccionWeb.c_str())};
}

string Lib::ConsultarDireccionFisica(string direccionFisica){
    return string {strcpy(this->direccionFisica, direccionFisica.c_str())};
}

string Lib::ConsultarTelefono(string telefono){
    return string {strcpy(this->telefono, telefono.c_str())};
}