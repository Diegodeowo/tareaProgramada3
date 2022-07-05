#ifndef EXCEPCIONABRIRARCHIVO_H
#define EXCEPCIONABRIRARCHIVO_H

#include <exception>

using namespace std;

class ExcepcionAbrirArchivo:public exception{
    public:
        ExcepcionAbrirArchivo() noexcept = default;
        ~ExcepcionAbrirArchivo() = default;

    virtual const char* what() const noexcept {
        return "ERROR: No se pudo abrir el archivo.";
    }

};

#endif