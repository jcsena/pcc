//
// Copyright (c) 2015 by Julio Seña. All Rights Reserved.
//

/**
Escriba un PROGRAMA que pida el sueldo mensual de un colaborador,
aplique un aumento del 15% sobre su salario si el mismo es inferior
a 1000.00 dólares, en caso contrario le aumente 10%.
DEBE IMPRIMIR EL SALARIO ACTUAL, el aumento  Y EL NUEVO SALARIO.(5 puntos)
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char const *argv[]) {
  /**
   * @salario: salario del trabajador
   * @aumento: El aumento al epleado de acuerdo al porcentaje(15% O 10% dependiendo del salario)
   * @totalSalario : totalSalario el la suma realizada de @salario y @aumento
   */
  float salario, aumento, totalSalario;

  // se precisa el numero de decimales
  cout << fixed << setprecision(2);
  // se solitan los dos numeros a ingresar por pantalla
  cout << "Por favor ingrese el salario: ";
  cin >> salario;

  // se valida que el monto del salio para aplicar el aumento respectivo
  if ( salario < 1000 ) {
    aumento = salario * 0.15;
  } else {
    aumento = salario * 0.10;
  }

  // se realiza la suma para calcular el total del salario.
  totalSalario = salario + aumento;

  // impresion de resultados
  cout << "Salario anterior: " << salario << "$" << endl;
  cout << "Aumento: " << aumento << "$" <<endl;
  cout << "Salario nuevo: " << totalSalario << "$" << endl;


  return 0;
}
