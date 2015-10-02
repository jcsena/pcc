/*

9. Programa que calcule el resto de cualquier división entera.

#include <stdio.h>
void main(){
         int D,d,R;
         printf("Hola, obtendremos el resto de cualquier division entera.\n\n");
         printf("Inserte el dividendo: ");
         scanf("%d",&D);
         printf("Bien, escriba el divisor: ");
         scanf("%d",&d);
         R=D%d;
         printf("\nEl resto de la division es %d\n\n",R);
}


*/

#include <iomanip>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {

   int D,d,R;

   cout <<  "Hola, obtendremos el resto de cualquier division entera." << endl;
   cout << "Inserte el dividendo: ";
   cin >> D;
   cout << "Bien, escriba el divisor: ";
   cin >> d;

   R=D%d;

   cout << "El resto de la division es: "<< R << endl;

  return 0;
}
