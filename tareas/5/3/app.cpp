/*
15. Programa que resuelve ecuaciones de segundo grado.

#include <stdio.h>
#include <math.h>
void main(){
         float A,B,C,D,S,sol1,sol2;
         printf("Bienvenido, Resolveremos su ecuacion de segundo grado.\n\n");
         printf("\nPor favor, introduzca el coeficiente A: ");
         scanf("%f",&A);
         printf("\nAhora, escriba el coeficiente B: ");
         scanf("%f",&B);
         printf("\nPor ultimo, inserte el coeficiente C: ");
         scanf("%f",&C);
         D=B*B-4*A*C;
         if(D<0){
                   printf("\n\nDisculpe, no tiene solucion real\n\n");
         }else if(D==0){
                   S=-B/2*A;
                   printf("\n\nEl resultado de la ecuacion es %f\n\n",S);
         }else{
                   sol1=(-B+sqrt(D))/(2*A);
                   sol2=(-B-sqrt(D))/(2*A);
                   printf("\n\nLos resultados de la ecuacion son %f y %f\n\n",sol1,sol2);
         }
         printf("\nGracias por utilizar este programa\n\n");
}
 */

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[]) {

  float A,B,C,D,S,sol1,sol2;

  cout << "Bienvenido, Resolveremos su ecuacion de segundo grado." << endl;
  cout << "Por favor, introduzca el coeficiente A: "; cin >> A;
  cout << "Ahora, escribe el coeficiente B: "; cin >> B;
  cout << "Por ultimo el coeficiente C: "; cin >> C;

  D=B*B-4*A*C;

  cout << fixed << setprecision(2);

  if(D<0){
            // printf("\n\nDisculpe, no tiene solucion real\n\n");
            cout << "Disculpe, no tiene solucion real" << endl;
  }else if(D==0){
            S=-B/2*A;
            cout << "El resultado de la ecuacion es " << S << endl;
  }else{
            sol1=(-B+sqrt(D))/(2*A);
            sol2=(-B-sqrt(D))/(2*A);
            cout << "Los resultados de la ecuacion son " << sol1 << " y " << sol2 << endl;
  }

  cout << "Gracias por utilizar este programa" << endl;

  return 0;
}
