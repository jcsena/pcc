/*
2)	Dada la cantidad de Billetes EN DOLARES DE 5,10,20,
PERMITA INTRODUCIR LA CANTIDAD DE CADA UNO, CALCULE EL MONTO TOTAL E IMPRIMA A
PANTALLA CUANTOS BILLETES FUERON DE CADA UNO , EL IMPORTE TOTAL POR CADA DENOMINACION
ASI COMO EL IMPORTE TOTAL CALCULADO (10 Ptos.)
*/

#include "iostream"
#include <iomanip>

using namespace std;

int main(int argc, char const *argv[]) {

  int a[3][2] = {
 {5,0},
 {10,0},
 {20,0}
}, grantotal = 0;

for (size_t i = 0; i < sizeof(a)/sizeof(*a); i++) {
  // std::cout << a[i][0] << std::endl;
  cout << "Cantidad de billetes de " << a[i][0] << "$: ";
  cin >> a[i][1];
}

for (size_t i = 0; i < sizeof(a)/sizeof(*a); i++) {

  int num = a[i][1],
  den = a[i][0],
  total = num * den;
  grantotal += total;

  // std::cout << a[i][0] << std::endl;
  cout << "Numero de billetes de "<< a[i][0] << "$: " << a[i][1] << ", importe "<< total << "$" << endl;
}

cout << "total importe: "<< grantotal << "$" << endl;

}
