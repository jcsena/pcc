/*

8. Programa que calcula el capital final de un interés simple.

#include <stdio.h>
void main(){
         float c,I,t,F;
         printf("Bienvenido. Calcularemos el capital final de un interes simple.\n\n");
         printf("Por favor, introduce el capital inicial: ");
         scanf("%f",&c);
         printf("Ahora, escribe el interes al que esta colocado: ");
         scanf("%f",&I);
         printf("Por ultimo, inserta el tiempo al que se deja el capital: ");
         scanf("%f",&t);
         F=c+c*(I/100)*t;
         printf("\n\nEl capital final es de %f\n\n",F);
}


*/

#include <iomanip>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {

   float c,I,t,F;

   cout <<  "Bienvenido. Calcularemos el capital final de un interes simple. " << endl;
   cout << "Por favor, introduce el capital inicial: ";
   cin >> c;
   cout << "Ahora, escribe el interes al que esta colocado: ";
   cin >> I;
   cout << "Por ultimo, inserta el tiempo al que se deja el capital: ";
   cin >> t;

   F=c+c*(I/100)*t;

   cout << "El capital final es de: "<< F << endl;

  return 0;
}
