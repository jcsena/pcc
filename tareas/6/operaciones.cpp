/*
Escriba un programa Que pida tres números e imprima si el tercero es igual
a la suma del primero y el segundo, o que imprima si el segundo es igual a
la suma del primero y el tercero, en caso contrario a los anteriores,
imprimirá que el primero es igual a la suma del segundo y el tercero,
en otro caso entonces que imprima que la suma no cumple con ninguna
de las condiciones de suma dadas.
*/

#include <iomanip>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {

  /*
    @a: Numero a capturador por pantalla
    @b: Numero b capturador por pantalla
    @c: Numero c capturador por pantalla
  */
  float a, b, c;

  // solicitud de los datos
  cout << "Por favor escriba 3 numeros: ";
  cin >> a >> b >> c;

  //validaciones de los parametros
  if ( c == ( a + b ) ) {
    cout << "El tercero es igual a la suma del primero y el segundo" << endl;
  } else if ( b == ( a + c ) ) {
    cout << "El segundo es igual a la suma del primero y el tercero" << endl;
  } else if( a  == ( b + c) ){
    cout << "El primero es igual a la suma del segundo y el tercero" << endl;
  } else{
    cout << "la suma no cumple con ninguna de las condiciones de suma dadas" << endl;
  }

}
