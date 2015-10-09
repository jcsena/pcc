/**
 Escribe un programa que permite introducir 3 entero
 enteros donde permita la division entera del primero /tercero
 divison real segundo/tercero
 resto del primeo del tercero
 */

#include <iomanip>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
  /**
   * @entero1: entero 1 entero capturado por pantalla
   * @entero2: entero 2 entero capturado por pantalla
   * @entero3: entero 3 entero capturado por pantalla
   * @div1: Division entera de entero 1 / entero 3
   * @div3: Division real de entero 2 / entero 3
   * @resto: Resto
   */

  int entero1, entero2, entero3, div1;
  float div2, resto;

   //se reciben los valores enteros
   cout << "Por favor digite el primer entero: ";
   cin >> entero1;
   cout << "Por favor digite el segundo entero: ";
   cin >> entero2;
   cout << "Por favor digite el tercer entero: ";
   cin >> entero3;


  // se realizan la divisiones
  div1 = entero1/entero3;
  div2 = entero2/entero3;
  resto = entero1 % entero3;

  //Se imprimen las divisiones
  cout <<  "Division entera: " << div1 << endl;
  cout << "Division real: " <<fixed << setprecision(2) << div2 << endl;
  cout << "Resto: "  << resto << endl;


  return 0;
}
