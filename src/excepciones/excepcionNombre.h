#ifndef EXCEPCIONNOMBRE_H
#define EXCEPCIONNOMBRE_H

#include <exception>

using namespace std;

class ExcepcionNombre:public exception{
    public:
        ExcepcionNombre() noexcept = default;
        ~ExcepcionNombre() = default;

    virtual const char* what() const noexcept {
        return "ERROR: Ingrese un nombre valido";
    }

};

#endif