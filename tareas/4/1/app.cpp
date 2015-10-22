/**
 Hacer un programa que lea 2 numeros
 sume los numeros
 si la suma es mayor o igual a 100  imprimir mayor o igual a 100
 si no cumple con la regla
 */

#include <iomanip>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {

  /**
   * @num1: Numero real ingreasado por patalla para realiza operacion suma
   * @num2: Numero real ingreasado por patalla para realiza operacion suma
   * @suma : Operacion suma realizada con los numeros @num1 y @num2
   */
  float num1, num2, suma;

  //se solitan los dos numeros a ingresar por pantalla
  cout << "Por favor escriba dos numeros: ";
  cin >> num1 >> num2;

  //se realiza la operacion de suma
  suma = num1 + num2;

  //se valida que la condicion de la suma sea mayor o igual a 100
  if(suma >= 100)
  cout << "La suma realizada es mayor a 100" << endl;
  else
  cout << "La suma de los numeros NO cumple con la condicion" << endl;


  return 0;
}
