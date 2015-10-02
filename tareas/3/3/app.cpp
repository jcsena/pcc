/*

3.
#include <stdio.h>
void main(){
         float R,sol1;
         printf("Bienvenido, calcularemos la longitud de su circunferencia.\n\n");
         printf("Lo unico que debe hacer es introducir el radio: ");
         scanf("%f",&R);
         sol1=2*3.141592*R;
         printf("\n\nEl resultado es %f\n\n",sol1);
}
*/

#include <iomanip>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {

   float R,sol1;

   cout <<  "Bienvenido, calcularemos la longitud de su circunferencia" << endl;
   cout << "Lo unico que debe hacer es introducir el radio: ";
   cin >> R;
   sol1=2*3.141592*R;
   cout << "El Resultado es: "<< sol1 << endl;
  return 0;
}
