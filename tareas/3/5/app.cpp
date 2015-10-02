/*

5. Programa que calcula áreas de trapecios.

#include <stdio.h>
void main(){
         float bma,bme,h,A;
         printf("Bienvenido al programa para calcular areas de trapecios.\n\n");
         printf("Bien, introduzca la base mayor: ");
         scanf("%f",&bma);
         printf("Ahora, escriba la base menor: ");
         scanf("%f",&bme);
         printf("Ya solo necesito la altura: ");
         scanf("%f",&h);
         A=((bma+bme)*h)/2;
         printf("\nEl area del trapecio es %f\n\n",A);
}

*/

#include <iomanip>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {

   float bma,bme,h,A;

   cout <<  "Bienvenido al programa para calcular areas de trapecios." << endl;
   cout << "Bien, introduzca la base mayor: ";
   cin >> bma;
   cout << "Ahora, escriba la base menor: ";
   cin >> bme;
   cout << "Ya solo necesito la altura: ";
   cin >> h;

   A=((bma+bme)*h)/2;
   cout << "El area del trapecio es: "<< A << endl;
  return 0;
}
