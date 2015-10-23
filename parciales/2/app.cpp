/*
Escriba un programa que muestre el nuevo salrio de un empleado si obtuvo un incremento del
8% sobre el salario. Debe pedir por teclado NOMBRE Y APELLIDO del colaborardor, cedula
y salario actual. Debe imprimir en pantalla los datos anteriores, ademas de cuanto fue el aumento
y el salario final del mismo.
 */

#include <iomanip>
#include <iostream>

// constante de valor del porcentaje del aumento
#define porcentaje 0.08
using namespace std;

int main(int argc, char const *argv[]) {

  /**
   * @nombre [nombre del empleado capturado por pantalla]
   * @apellido [apellido del empleado capturado por pantalla]
   * @cedula [cedula del empleado capturado por pantalla]
   */
  string nombre, apellido ,cedula;

  /**
   * @salarioActual [contendra el valor del salario actual del empleado capturado por pantalla]
   * @catidadKm [sera el nuevo salario de empleado apartir del porcentaje de aumento]
   * @catidadKm [sera el aumento del salario]
   */
  float salarioActual, salarioNuevo, aumento;

  //Limita el numero de decimales a 2
  cout << fixed << setprecision(2);
  cout << "Bienvenido!" << endl;

  //ingreso de los datos del empleado
  //nombre
  cout << "Por favor ingrese el nombre: ";
  cin >> nombre;

  //apellido
  cout << "Por favor ingrese el apellido: ";
  cin >> apellido;

  //cedula
  cout << "Por favor ingrese el cedula: ";
  cin >> cedula;

  //salario actual
  cout << "Por favor ingrese el salario actual: ";
  cin >> salarioActual;

  //se calcula el aumento del salario de empleado
  aumento = salarioActual * porcentaje;

  //se calcula el nuevo salario del empleado
  salarioNuevo = salarioActual + aumento;

  //impresion de resultados
  cout << "Empleado nombre: " << nombre << endl;
  cout << "Empleado apellido: " << apellido << endl;
  cout << "Empleado cedula: " << cedula << endl;
  cout << "Empleado aumento: " << aumento << endl;
  cout << "Empleado salario nuevo: " << salarioNuevo << endl;


  return 0;
}
