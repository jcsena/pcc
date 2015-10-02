/*

2. Programa que calcule la suma de dos números.
#include <stdio.h>
void main(){
         int X,Y,Z;
         printf("Por favor, introduzca un numero:  ");
         scanf("%d",&X);
         printf("Ahora, inserte otro:  ");
         scanf("%d",&Y);
         Z=X+Y;
         printf("\nEl resultado es %d\n",Z);
}*/

#include <iomanip>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
   int X,Y,Z;
   cout << "Por favor, introduzca un numero:  ";
   cin >> X;
   cout << "Ahora, inserte otro:  ";
   cin >> Y;
   Z=X+Y;
   cout << "El resultado es: "  << Z << endl; 

  return 0;
}
