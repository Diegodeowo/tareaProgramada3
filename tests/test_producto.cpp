#include <gtest/gtest.h>
#include "../src/producto.h"
#include <string>

using namespace std;

namespace
{

TEST(Test_Producto, Test_Producto_ModificarNombre){

  int id = 1;
  string nombreProducto = "Arroz";
  string nuevoNombre = "Naranjas";
  int existencias = 3;

  Producto *p1 = new Producto(id, nombreProducto, existencias);
  p1->ModificarNombre(nuevoNombre);

  string currentName = p1->GetNombre();
  string expected = nuevoNombre;

  EXPECT_EQ(currentName, expected);

}

TEST(Test_Producto, Test_Producto_ModificarExistencias){

  int id = 1;
  string nombreProducto = "Arroz";
  int existencias = 3;

  Producto *p1 = new Producto(id, nombreProducto, existencias);
  p1->ModificarExistencias(5);

  int currentStock = p1->GetExistencias();
  int expected =  5;

  EXPECT_EQ(currentStock, expected);

}



}