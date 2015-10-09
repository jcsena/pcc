/*8)	Realice un PROGRAMA que reciba una cantidad de dinero en pesos
mexicanos y convierta esa misma cantidad en dólares,
considerando que el dólar cotiza a 17.40 pesos por dólar.
 Debe imprimir, cuantos pesos se introdujeron y
 cuantos dólares corresponden a esa cantidad.
 Haga el ALGORITMO de este programa		(5 Ptos.)
 */

 #include <iostream>
 #include <iomanip>

//se define la costate de conversion de la moneda mexicana vs el dolar USA
 #define conversion  17.40

 using namespace std;

 int main(int argc, char const *argv[]) {

   /**
    * [@pesos: El valor de pesos mexicanos capturado por pantalla]
    * [@totalEnDolar: Es el resultado de la operacion division entre @pesos/@conversion ]
    */
   float  pesos, totalEnDolar;

   //se captura la cantidad de pesos mexicanos
   cout << "Introduzca los pesos mexicanos: ";
   cin >> pesos;

   //se realiza la operacion de conversion
   totalEnDolar = pesos/conversion;

   //se imprimen los valores solictados
   cout << "Pesos Mexicanos: "  << pesos << ", Total dolares: "<< totalEnDolar << "$" << endl;

   return 0;
 }
