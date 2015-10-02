/*10)	Calcular el número de pulsaciones que una persona
debe tener por cada 10 segundos de ejercicio,
 si la fórmula es: núm. pulsaciones = (220 - edad)/10.
 Haga el programa respectivo.	(5 Ptos.)
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char const *argv[]) {

    int edad;
    float pulsaciones;

    cout << "Por favor, digite su edad: ";
    cin >> edad;

    pulsaciones = (220 - edad)/10;

    cout <<  "Su numero de pulsaciones en 10 segudos de ejercicio es: "<< pulsaciones << endl;


  return 0;
}
