#ifndef EXCEPCIONID_H
#define EXCEPCIONID_H

#include <exception>

using namespace std;

class ExcepcionID:public exception{
    public:
        ExcepcionID() noexcept = default;
        ~ExcepcionID() = default;

    virtual const char* what() const noexcept {
        return "ERROR: Ingrese un ID diferente de 0";
    }

};

#endif