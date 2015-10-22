/*
14. Programa que escriba en pantalla un comentario con respecto a la temperatura del día.

#include <stdio.h>
void main(){
         int X,Y;
         printf("Bienvenido. Introduzca la temperatura");
         scanf("%d",&X);
         if(X<15){
                   printf("\nBrrr... Que frio!\n");
         }else if(X<25){
                   printf("\nClima templado\n");
         }else{
                   printf("\nBuf!..Que calor!\n");
         }
}
 */

#include <iomanip>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {

  int X;
  cout << "Bienvenido. Introduzca la temperatura "; cin >> X;
  if(X<15){
    cout << "Brrr... Que frio" << endl;
  }
  else if(X<25){
    cout << "Clima Templado"  << endl;
  }
  else{
    cout << "Buf!..Que calor!" << endl;
  }

  return 0;
}
