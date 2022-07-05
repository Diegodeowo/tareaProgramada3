#ifndef EXCEPCIONDISPO_H
#define EXCEPCIONDISPO_H

#include <exception>

using namespace std;

class ExcepcionDispo:public exception{
    public:
        ExcepcionDispo() noexcept = default;
        ~ExcepcionDispo() = default;

    virtual const char* what() const noexcept {
        return "ERROR: Ingrese una cantidad mayor a 0";
    }

};

#endif