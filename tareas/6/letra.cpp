/*
Escriba un programa PIA UNA LETRA POR TECLADO E INDIQUE SI ES VOCAL O
CONSONANTE O CARÁCTER ALFANUMERICO DISTINTO A LETRAS DE ABECEDARIO.
DEBE IMPRMIR EL CARÁCTER Y DE QUE TIPO ES.
 */

#include <iomanip>
#include <iostream>
#include <regex>

using namespace std;

// Se crea los regex de la busqueda de las palbras que haran match
regex consonantes("[a-z A-Z]");
regex vocales("[aeiouAEIOU]");

/*
  @letra [letra ingresada por el usuario ]
  este metodo permitir validar si el resultado es:
  0 => not matched
  1 => vocales
  2 => consonantes
 */
int typeversion(string letra) {

    if(regex_match(letra,vocales)) return 1;
    if(regex_match(letra,consonantes)) return 2;

    return 0;
}


int main(int argc, char const *argv[]) {

  // @letra el caracter ingresado por el usuario
  // @res respuesta del tipo de caracter ingresado
  string letra;
  int res;

  // se solicita la letra o caracter al usuario
  cout << "Por favor escriba una letra: ";
  cin >> letra;

  // se obtiene el tipo de carater que pertenece
  res = typeversion(letra);

  // se agrega muestra el resultado dependiente del tipo de caracter
  switch (res) {
    case 1: cout << "Es una vocal" << endl; break;
    case 2: cout << "Es una consonante" << endl; break;
    default : cout << "Carácter alfanumerico distinto a letras de abecedario" << endl;
  }

  return 0;
}
