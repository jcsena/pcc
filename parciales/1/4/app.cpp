/*
Programa que obtenga promedio de 3 notas introducidas a travez del teclado
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char const *argv[]) {

  /**
  * @a [numero 1 capturado por pantalla]
  * @b [numero 2 capturado por pantalla]
  * @c [numero 3 capturado por pantalla]
  * @promed [resultado del promedio de @a, @b, @c]
  */
  float a,b,c,promed;

  cout << "Introduzca 3 numeros para obtener promedio: " << endl;

  //se capturan los numeros
  cin >> a >> b >> c;

  //se realiza la operacion del promedio
  promed = (a+b+c)/3;

  //resolver numeros exponenciales
  cout << fixed;

  //impresion de valores
  cout << "El promedio es " << setprecision(2) << promed << endl;
  return 0;
}
