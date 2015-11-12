//
// Copyright (c) 2015 by Julio Seña. All Rights Reserved.
//

/**
 1.	Escriba el programa correspondiente. Debe funcionar correctamente.
Dado como datos de entrada tres números enteros, determine si los mismos
están en orden creciente y los imprima en pantalla.
Datos: A, B, C (variables de tipo entero. Los números deben ser diferentes entre sí, de lo contrario no procede).
Se deben imprimir los resultados. Sugerencia: recuerde utilizar operador lógico.	HAGA EL ALGORITMO.				(10 puntos)

 */

#include <iomanip>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {

  /**
   * @A : Numero ingreasado por patalla
   * @B : Numero ingreasado por patalla
   * @C : Numero ingreasado por patalla
   */
  int A, B, C;

  //se solitan los dos numeros a ingresar por pantalla
  cout << "Por favor escriba tres numeros en order creciente: ";
  cin >> A >> B >> C;

  //se realiza la validacion de que si es creciente los numeros
  if ( ( A < B ) && (B < C)  ) {

    // impresion de resultados
    cout << "Numeros correctamente ordenados" << endl;
    cout << "A: " <<A << endl;
    cout << "B: " <<B << endl;
    cout << "C: " <<C << endl;
  }
  else{
    cout << "Los numeros deben estar en order creciente!" << endl;
  }

  return 0;
}
