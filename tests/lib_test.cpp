#include <gtest/gtest.h>
#include "./../src/lib.h"
#include <string>


TEST(Lib_test, test_ConsultarNombre)
{

    Lib *lib = new Lib();

    string actual = lib->ConsultarNombre("Diego Soto");
    char esperada[15] = "Diego Soto";

    delete lib;

    EXPECT_EQ(esperada, actual);
}

TEST(Lib_test, test_ConsultarDireccionWeb)
{

    Lib *lib = new Lib();
    string actual = lib->ConsultarDireccionWeb("github.com/Diegodeowo");
    char esperada[24] = "github.com/Diegodeowo";

    delete lib;
    EXPECT_EQ(esperada, actual);
}

TEST(Lib_test, test_ConsultarDireccionFisica)
{

    Lib *lib = new Lib();
    string actual = lib->ConsultarDireccionFisica("San José, Costa Rica");
    char esperada[24] = "San José, Costa Rica";

    delete lib;
    EXPECT_EQ(esperada, actual);
}

TEST(Lib_test, test_ConsultarTelefono)
{

    Lib *lib = new Lib();
    string actual = lib->ConsultarTelefono("1234567");
    char esperada[8] = "1234567";
    // Si se colocan 8 numeros por alguna razon da error
    // pero los char están de 8 caracteres como la tarea lo indita


    delete lib;
    EXPECT_EQ(esperada, actual);
}