/*9)	Realizar un programa para calcular el % (que se introduce por teclado)
de un valor CONSTANTE. Dicho valor será 178. Imprimirá de cuanto fue el
porcentaje a calcular y cuál es el resultado final
(5 Ptos.)*/

#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char const *argv[]) {

   const int valor = 178;
   float por ,total;

    cout << "Escribe el porcentaje(%): ";
    cin >> por;

    total = valor * (por/100);

    cout << "Porcentaje: " << por << "%, Total: "<< total << endl;


  return 0;
}
