#include <iostream>
#include <iomanip>

using namespace std;

/**
 * [@numero: Esta variable recibira un numero capturado por pantall]
 * [@doble: Sera el resultado de la multiplicacion * 2 del @numero capturado]
 * [@porcetaje: Sera el reaultado del la multiplicacion * 0.15 de @doble]
 */
float numero, doble, porcentaje;

int main(int argc, char const *argv[]) {

  cout << "Por favor ingrese un numero" << endl;

  //se recibe y asgina del numero por pantalla
  cin >> numero;

  //se realiza la opreacion (doble) del numero capturado
  doble = numero * 2;

  //se calcula el 15% de la opeacion
  porcentaje = doble * 0.15;

  //se imprime los valores solictados
  cout << "El numero es " << numero << endl;
  cout << "Su doble es " << doble << endl;
  cout << "El 15% del doble es "<< porcentaje << "%" << endl;
  return 0;
}
