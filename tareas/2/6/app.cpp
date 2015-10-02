/*6)	Realizar un PROGRAMA que calcule las cuatro operaciones básicas:
suma, resta, división, multiplicación, con dos números.
DEBERÁ MOSTRAR EN PANTALLA LOS DOS NUMEROS ASI COMO LOS
RESULTADOS CORRESPONDIENTES. 	(5 Ptos.)
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char const *argv[]) {

  float num1, num2, suma, rest, divs, mult;

  cout << "Digite el primer numero: ";
  cin >> num1;

  cout << "Digite el segundo numero: ";
  cin >> num2;


  suma = num1 + num2;

  cout << "suma: " << suma << endl;

  rest = num1 - num2;

  cout << "Resta: " << rest << endl;

  mult = num1 * num2;

  cout << "Multiplicacion: " << mult <<endl;

  if(num2 == 0 ) {
    cout << "Division: Indeterminado" <<endl;
  }else{
    divs = num1/num2;
    cout << "Division: "<< divs << endl;
  }

  return 0;
}
