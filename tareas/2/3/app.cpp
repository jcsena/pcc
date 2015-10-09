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

  /**
   * [@precio: Valor unitario capturado por pantalla]
   * [@total: Resultado de la operacion de @precio * @cantidad]
   * [@cantidad: Catidad del producto capturado por pantalla]
   */
  float precio, total;
  int cantidad;

  //se captura la cantidad de producto
  cout << "Cantidad: ";
  cin  >> cantidad;

  //se captura el precio unitario del producto
  cout << "Ingrese precio unitario: ";
  cin >> precio;

  //se realiza la multiplicacion de @precio *  cantidad
  total = cantidad * precio;

  //se realiza la impresion de resultados
  cout << "Catidad: "<< cantidad << ", Precio unitario: " << precio << ", total: " << total << endl;

  return 0;
}
