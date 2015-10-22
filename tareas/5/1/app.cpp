/*
13. Programa que indica qué numero de los dos introducidos por el usuario es mayor.

#include <stdio.h>
void main(){
         int X,Y;
         printf("Por favor, escribe un numero ");
         scanf("%d",&X);
         printf("Ahora, teclea otro ");
         scanf("%d",&Y);
         if(X>Y){
                   printf("\nEl mayor es %d\n\n",X);
         }else if(Y>X){
                   printf("\nEl mayor es %d\n\n",Y);
         }else{
                   printf("\nEstos dos numeros son iguales\n\n");
         }
}
 */

#include <iomanip>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {

  int X, Y;
  cout << "Por favor, escribe un numero "; cin >> X;
  cout << "Ahora, teclea otro "; cin >> Y;
  if(X>Y){
    cout << "El meyor es " << X << endl;
  }
  else if(Y>X){
    cout << "El meyor es " << Y << endl;
  }
  else{
    cout << "Estos dos numeros son iguales" << endl;
  }

  return 0;
}
