//
// Copyright (c) 2015 by Julio Seña. All Rights Reserved.
//

/**
 2. SE PIDEN DOS NUMEROS POR TECLADO. SE HACE LA SUMA DE LOS MISMOS.
 LUEGO SE VERIFICA SI LA SUMA ES 25 ENTONCES SE IMRPIMEN LOS NUMEROS Y LA MULTIPLICACION DE LOS MISMOS,
 SI LA SUMA ES 50 O 75 ENTONCES SE IMPRIMEN LOS NUMEROS ASI COMO CADA UNO ELEVADO AL CUADRADO,
 SI LA SUMA ES 100 0 200 ENTONCES SE IMPRIMEN LOS NUMEROS Y ADEMAS EL CUBO DE LOS MISMOS,
 SI LA SUMA ES 500 ENTONCES SE IMPRIMEN LOS NUMEROS Y EL DOBLE DE CADA UNO; CUALQUIER OTRO CASO,
 SOLO SE IMPRIMEN LOS NUMEROS Y SE INDICA QUE SU SUMA NO CUMPLEN CON NINGUNO DE LOS CASOS INDICADOS.
 */

#include <iomanip>
#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[]) {

  /**
   * @A : Numero ingreasado por patalla
   * @B : Numero ingreasado por patalla
   */
  int A, B, suma;


  //se solitan los dos numeros a ingresar por pantalla
  cout << "Por favor escriba dos numeros: ";
  cin >> A >> B;

  //se realiza la operacion de la suma
  suma = A + B;

  //impresion de los numeros
  cout << "numero A: " << A << endl;
  cout << "numero B: " << B << endl;

  cout << fixed << setprecision(1);
  //validacion de la suma
  switch (suma) {
    case 25:
      cout << "multiplicacion: " << B * A << endl;
      break;
    case 50 :
    case 75 :
      cout << "numero A elevado a la 2: " << pow(A,2) << endl;
      cout << "numero B elevado a la 2: " << pow(B,2) << endl;
      break;
    case 100:
    case 200:
      cout << "numero A elevado a la 3: " << pow(A,3) << endl;
      cout << "numero B elevado a la 3: " << pow(B,3) << endl;
      break;
    case 500 :
      cout << "numero doble de A : " << A * 2 << endl;
      cout << "numero doble de B : " << B * 2 << endl;
      break;
    default: cout << "La suma no cumple con ningun numero" << endl;
  }

  return 0;
}
