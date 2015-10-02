/*
Escriba un programa que imprima de salida el nombre de su colegio y
que imprima la multiplicación de 3 numeros por teclado
*/

#include <iostream>
#include <iomanip>

using namespace std;

main() {

  //definicion de variables
  string escuela;
  float num1, num2, num3;

  cout << "Por favor escriba su escuela: ";

  //se camptura el nombre de la escuela
  cin >> escuela;

  cout << "por favor ecriba el primer numero: ";

  //se campura el primer numero
  cin >> num1;

  cout << "por favor escriba el segundo numero: ";

  //se captura el segundo numero
  cin >> num2;

  cout << "por favor escriba el tercer numero: " ;

  //se captura el tercer numero
  cin >> num3;

  cout << "Su colegio es: "<< escuela << endl;
  cout << "La multipilcacion de sus numeros es " << num1 * num2 * num3 << endl;
  //se imprimen los resultados
}
