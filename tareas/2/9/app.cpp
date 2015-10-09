/*9)	Realizar un programa para calcular el % (que se introduce por teclado)
de un valor CONSTANTE. Dicho valor será 178. Imprimirá de cuanto fue el
porcentaje a calcular y cuál es el resultado final
(5 Ptos.)*/

#include <iostream>
#include <iomanip>

//El valor constate dado en el problema
#define valor 178
using namespace std;

int main(int argc, char const *argv[]) {

  /**
   * [@por: El valor porcentual  capturado por pantalla]
   * [@total: Es el resultado de la operacion  @valor*(@por/@conversion) ]
   */
   float por ,total;

    // se captura el porcentaje por pantalla
    cout << "Escribe el porcentaje(%): ";
    cin >> por;

    //se realiza la operacion para calcular el total Porcentaje
    total = valor * (por/100);

    //se imprime el valor 
    cout << "Porcentaje: " << por << "%, Total: "<< total << endl;


  return 0;
}
