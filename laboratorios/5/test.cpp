/*
  se desea saber la suma de la cantidad de  numeros y la condicion es que estos sean entre 1 y 10
  y que el programa contenga la condicion de paro centinela para obtener el resultado;
 */


#include <iomanip>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {

    int sum=0, valor=0;

      while (true) {

          cout << "escriba un valor entre 1 y 10: " <<endl;
          cin >> valor;

          if(valor == 0 ) break;

          if(valor>= 1 && valor <= 10) sum += valor;

      }

      cout << "suma final: " << sum << endl;

  return 0;
}
