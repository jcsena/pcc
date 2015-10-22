/*
16. Programa que indica la correspondencia de un número introducido por el usuario con un mes del año  (aconsejable realizarlo con SWITCH).

#include <stdio.h>
void main(){
         int m;
         printf("Hola, le diremos el mes segun el numero introducido.\n\n");
         printf("Introduzca el numero: ");
        printf("\n");
         scanf("%d",&m);
         if(m==1){
                   printf("Este numero se corresponde con el mes de Enero.\n\n");
         }else if(m==2){
                   printf("Este numero se corresponde con el mes de Febrero.\n\n");
         }else if(m==3){
                   printf("Este numero se corresponde con el mes de Marzo.\n\n");
         }else if(m==4){
                   printf("Este numero se corresponde con el mes de Abril.\n\n");
         }else if(m==5){
                   printf("Este numero se corresponde con el mes de Mayo.\n\n");
         }else if(m==6){
                   printf("Este numero se corresponde con el mes de Junio.\n\n");
         }else if(m==7){
                   printf("Este numero se corresponde con el mes de Julio.\n\n");
         }else if(m==8){
                   printf("Este numero se corresponde con el mes de Agosto.\n\n");
         }else if(m==9){
                   printf("Este numero se corresponde con el mes de Septiembre.\n\n");
         }else if(m==10){
                   printf("Este numero se corresponde con el mes de Octubre.\n\n");
         }else if(m==11){
                   printf("Este numero se corresponde con el mes de Noviembre.\n\n");
         }else if(m==12){
                   printf("Este numero se corresponde con el mes de Diciembre.\n\n");
         }else{
                   printf("Error, mes inexistente.\n\n");
         }
}
 */

#include <iomanip>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {

  int m;

  cout << "Hola, le diremos el mes segun el numero introducido." << endl;
  cout << "Introduzca el numero: ";

  cin >> m;
  if(m==1){
            cout << "Este numero se corresponde con el mes de Enero." << endl;
  }else if(m==2){
            cout << "Este numero se corresponde con el mes de Febrero." << endl;
  }else if(m==3){
            cout << "Este numero se corresponde con el mes de Marzo." << endl;
  }else if(m==4){
            cout << "Este numero se corresponde con el mes de Abril." << endl;
  }else if(m==5){
            cout << "Este numero se corresponde con el mes de Mayo." << endl;
  }else if(m==6){
            cout << "Este numero se corresponde con el mes de Junio." << endl;
  }else if(m==7){
            cout << "Este numero se corresponde con el mes de Julio." << endl;
  }else if(m==8){
            cout << "Este numero se corresponde con el mes de Agosto." << endl;
  }else if(m==9){
            cout << "Este numero se corresponde con el mes de Septiembre." << endl;
  }else if(m==10){
            cout << "Este numero se corresponde con el mes de Octubre." << endl;
  }else if(m==11){
            cout << "Este numero se corresponde con el mes de Noviembre." << endl;
  }else if(m==12){
            cout << "Este numero se corresponde con el mes de Diciembre." << endl;
  }else{
            cout << "Error, mes inexistente." << endl;
  }

  /* code */
  return 0;
}
