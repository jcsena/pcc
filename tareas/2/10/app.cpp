/*10)	Calcular el número de pulsaciones que una persona
debe tener por cada 10 segundos de ejercicio,
 si la fórmula es: núm. pulsaciones = (220 - edad)/10.
 Haga el programa respectivo.	(5 Ptos.)
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char const *argv[]) {

  /**
   * [@edad: Se captura la edad la persona por pantalla]
   * [@pulsaciones: El Calculo realizado para calcular el numero de pulsaciones . (220 - @edad)/10   ]
   */
    int edad;
    float pulsaciones;

    // Se captura la edad
    cout << "Por favor, digite su edad: ";
    cin >> edad;

    //se captura el numero de pulsaciones
    pulsaciones = (220 - edad)/10;

    //Se imprime el numero de pulsaciones
    cout <<  "Su numero de pulsaciones en 10 segudos de ejercicio es: "<< pulsaciones << endl;


  return 0;
}
