/*
3)	Ingresando la cantidad de un producto y su precio unitario POR TECLADO,
obtener como resultado el precio final que debe pagar el cliente.
Debe imprimir en pantalla, la cantidad de producto, el precio unitario
y el total a pagar por el cliente.		(5 Ptos.)
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char const *argv[]) {

  float precio, total;
  int cantidad;

  cout << "Cantidad: ";
  cin  >> cantidad;
  cout << "Ingrese precio unitario: ";
  cin >> precio;

  total = cantidad * precio;

  cout << "Catidad: "<< cantidad << ", Precio unitario: " << precio << ", total: " << total << endl;

  /* code */
  return 0;
}
