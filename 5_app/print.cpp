/*
Escriba un programa que imprima de salida el nombre de su colegio y
que imprima la multiplicación de 3 numeros por teclado
*/

#include <iostream>
#include <iomanip>


main() {

  //definicion de variables
  std::string escuela;
  float num1, num2, num3;

  std::cout << "Por favor escriba su escuela: " << std::endl;

  //se camptura el nombre de la escuela
  std::cin >> escuela;

  std::cout << "por favor ecriba el primer numero: " << std::endl;

  //se campura el primer numero
  std::cin >> num1;

  std::cout << "por favor escriba el segundo numero: " << std::endl;

  //se captura el segundo numero
  std::cin >> num2;

  std::cout << "por favor escriba el tercer numero: " << std::endl;

  //se captura el tercer numero
  std::cin >> num3;

  std::cout << "Su colegio es: "<< escuela << std::endl;
  std::cout << "La multipilcacion de sus numeros es " << num1 * num2 * num3 << std::endl;
  //se imprimen los resultados
}
