/*

10. Programa que calcula el precio de un objeto sin el impuesto de valor añadido (IVA).

#include <stdio.h>
void main(){
         float X,IVA,R;
         printf("Bienvenido.Calcularemos el precio de un articulo sin el IVA.\n\n");
         printf("Por favor, introduzca el precio de la compra: ");
         scanf("%f",&X);
         IVA=(16*X/100);
         R=X-IVA;
         printf("\nEl precio del objeto sin IVA es %f\n\n",R);
}


*/

#include <iomanip>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {

    float X,IVA,R;

   cout <<  "Bienvenido.Calcularemos el precio de un articulo sin el IVA." << endl;
   cout << "Por favor, introduzca el precio de la compra: ";
   cin >> X;
   IVA=(16*X/100);
   R=X-IVA;

   cout << "El precio del objeto sin IVA es: "<< R << endl;

  return 0;
}
