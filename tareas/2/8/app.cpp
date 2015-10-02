/*8)	Realice un PROGRAMA que reciba una cantidad de dinero en pesos
mexicanos y convierta esa misma cantidad en dólares,
considerando que el dólar cotiza a 17.40 pesos por dólar.
 Debe imprimir, cuantos pesos se introdujeron y
 cuantos dólares corresponden a esa cantidad.
 Haga el ALGORITMO de este programa		(5 Ptos.)
 */

 #include <iostream>
 #include <iomanip>

 using namespace std;

 int main(int argc, char const *argv[]) {

   float conversion = 17.40, pesos, totalEnDolar;

   cout << "Introduzca los pesos mexicanos: ";
   cin >> pesos;

   totalEnDolar = pesos/conversion;

   cout << "Pesos Mexicanos: "  << pesos << ", Total dolares: "<< totalEnDolar << "$" << endl;

   return 0;
 }
