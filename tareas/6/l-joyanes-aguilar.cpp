/*
 5.11
 Es muy frecuente tener que realizar validación de entrada de datos
 en la mayoría de las aplicaciones. Este ejemplo detecta cualquier
 entrada comprendida entre 1 y 12, rechazando las restantes, ya que
 se trata de leer los números correspondientes a los meses del año.
 */

#include <iomanip>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {

  // @mes variable mes del año
  int mes;

  //ciclo repetitivo
  do {
    cout << "Introducir numero del mes: ";
    cin >> mes;

    //validacion del mes
    if( ( mes >=1 ) && ( mes <=12 ) ) {
      cout << "Valor entre 1 y 12" << endl;
    }

  // validacion del ciclo
  } while( (mes >=1)  &&  (mes <=12 ) );



  return 0;
}
