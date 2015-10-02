/*

4. Programa que calcula la media aritmética de tres números cualesquiera.

#include <stdio.h>
void main(){
         float a,b,c,M;
         printf("Bienvenido, calcularemos la media aritmetica de tres numeros.\n\n");
         printf("Por favor, introduzca el primero: ");
         scanf("%f",&a);
         printf("Ahora, inserte el segundo de ellos: ");
         scanf("%f",&b);
         printf("Por ultimo, teclee el numero final: ");
         scanf("%f",&c);
         M=(a+b+c)/3;
         printf("\nEl resultado es %f\n\n",M);
}

*/

#include <iomanip>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {

   float a,b,c,M;

   cout <<  "Bienvenido, calcularemos la media aritmetica de tres numeros" << endl;
   cout << "Por favor, introduzca el primero: ";
   cin >> a;
   cout << "Ahora, inserte el segundo de ellos: ";
   cin >> b;
   cout << "Por ultimo, teclee el numero final: ";
   cin >> c;

   M=(a+b+c)/3;
   cout << "El Resultado es: "<< M << endl;
  return 0;
}
