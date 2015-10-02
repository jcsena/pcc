/*


6. Programa que calcule raíces cuadradas enteras.

#include <stdio.h>
#include <math.h>
void main(){
         int X,R;
         printf("Por favor, inserte un numero");
         scanf("%d",&X);
         R=sqrt(X);
         printf("\nSu raiz cuadrada es %d\n\n",R);
}


*/

#include <iomanip>
#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char const *argv[]) {

    int X,R;

   cout <<  "Bienvenido al programa para calcular raices cuadradas." << endl;
   cout << "Por favor, inserte un numero: ";
   cin >> X;

   R=sqrt(X);
   cout << "Su raiz cuadrada es: "<< R << endl;
  return 0;
}
