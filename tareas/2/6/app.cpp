/*6)	Realizar un PROGRAMA que calcule las cuatro operaciones básicas:
suma, resta, división, multiplicación, con dos números.
DEBERÁ MOSTRAR EN PANTALLA LOS DOS NUMEROS ASI COMO LOS
RESULTADOS CORRESPONDIENTES. 	(5 Ptos.)
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char const *argv[]) {


    /**
     * [@num1: Valor recibido del primer numero por pantalla]
     * [@num2: Valor recibido del segundo numero por pantall]
     * [@suma: Operacion suma realizada con @num1 y @num2]
     * [@rest: Operacion resta realizada con @num1 y @num2]
     * [@divs: Operacion division realizada con @num1 y @num2]
     * [@mult: Operacion multiplicacion realizada con @num1 y @num2]
     */
  float num1, num2, suma, rest, divs, mult;


  //se recibe el primer numero por pantalla
  cout << "Digite el primer numero: ";
  cin >> num1;

  //se recibe el segundo numero por pantalla
  cout << "Digite el segundo numero: ";
  cin >> num2;

  //se realiza la operacion suma de los @num1 y num2
  suma = num1 + num2;

  //se imprime  la  suma
  cout << "suma: " << suma << endl;

  //se realiza la operacion resta de los @num1 y num2
  rest = num1 - num2;

  //se imprime la resta
  cout << "Resta: " << rest << endl;

  //se realiza la operacion multiplicacion de los @num1 y num2
  mult = num1 * num2;

  //se imprime la multiplicacion
  cout << "Multiplicacion: " << mult <<endl;

  //se realiza una validacion para evitar un error causado por dividir un numero sobre 0
  if(num2 == 0 ) {
    cout << "Division: Indeterminado" <<endl;
  }else{

    //se realiza la operacion division de los @num1 y num2
    divs = num1/num2;

    //se imprime division
    cout << "Division: "<< divs << endl;
  }

  return 0;
}
