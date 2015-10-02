#include <iostream>
#include <iomanip>

using namespace std;

float numero, doble, porcentaje;

main(int argc, char const *argv[]) {
  /* code */

  cout << "Por favor ingrese un numero" << endl;

  cin >> numero;

  doble = numero * 2;

  porcentaje = doble * 0.15;

  cout << "El numero es " << numero << endl;
  cout << "Su doble es " << doble << endl;
  cout << "El 15% del numero es "<< porcentaje << "%" << endl;

}
