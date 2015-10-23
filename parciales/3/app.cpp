/**
 Escriba un programa que pida tres nuemeros, sume el 1 y el 2, multiplique 2 y el 3
  y obetenga la div entera y el mod resto del 3 entre 1. Todos los resultados deben imprimirse
  en pantalla
 */

#include <iomanip>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {

  /**
  * @num1 [numero 1 capturado por pantalla]
  * @num2 [numero 2 capturado por pantalla]
  * @num3 [numero 3 capturado por pantalla]
  * @suma [resultado del la suma de el @num1 y @num2]
  * @multiplicacion [resultado del la multiplicacion de el @num2 y @num3]
  * @division [resultado del la division de el @num3 y @num1]
  * @mod [resultado del la mod de el @num3 y @num1]
  */
  int num1, num2, num3, suma, multiplicacion;
  int division, mod;

  //Limita el numero de decimales a 2
  cout << fixed << setprecision(2);
  cout << "Bienvenido!" << endl;

  //se realiza la peticion de los numeros
  cout << "ingrese el numero 1: "; cin >> num1;
  cout << "ingrese el numero 2: "; cin >> num2;
  cout << "ingrese el numero 3: "; cin >> num3;
  //se realiza la suma de el @num1 y @num2
  suma = num1 + num2;

  //se realiza la multiplicacion de el @num2 y @num3
  multiplicacion = num2 * num3;

  //se realiza la division de el @num2 y @num3
  division = num3/num1;

  //se realiza el resto de el @num3 y @num1
  mod =  num3 % num1;

  //impresion de valores
  cout << "El resultado de la suma es: " << suma << endl;
  cout << "El resultado de la multiplicacion es: " << multiplicacion << endl;
  cout << "El resultado de la division es: " << division << endl;
  cout << "El resultado de la mod es: " << mod << endl;

  return 0;
}
