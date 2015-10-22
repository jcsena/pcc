/*
17. Programa que simula un cajero automático con un saldo inicial de 1000 Euros.


#include <stdio.h>
void main(){
         int SI,opc;
         float din,dan,S;
         SI=1000;
         printf("Bienvenido a su cajero virtual.\n");
         printf("Seleccione una opcion:\n\n");
         printf("1.Ingreso en cuenta.\n2.Reintegro.\n3.Ver el saldo disponible\n0.Salir\n\nUsted ha marcado: ");
         scanf("%d",&opc);
         if(opc==1){
            printf("\nBien, escriba el dinero que desee introducir: ");
            scanf("%f",&din);
            S=SI+din;
            printf("\nIngreso realizado correctamente. Su saldo actual es de %f\n",S);
         }else if(opc==2){
            printf("\nAhora, teclee la cantidad de capital que desea retirar: ");
            scanf("%f",&dan);
            if(dan>SI){
               printf("\nError. No dispone de tanto sueldo.\n");
            }else{
               S=SI-dan;
               printf("\nReintegro realizado correctamente. Su saldo actual es de %f\n",S);
            }
         }else if(opc==3){
            printf("\nSu saldo actual es de %d\n",SI);
         }else if(opc==0){
            printf("\nGracias por utilizar este programa.\n\n");
         }else{
            printf("\nDisculpe, se ha equivocado al marcar.\n\n");
    }
}
 */


#include <iomanip>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
  int SI,opc;
  float din,dan,S;
  SI=1000;
  cout << "Bienvenido a su cajero virtual" << endl;
  cout << "Seleccione una opcion: " << endl;
  cout << "1.Ingreso en cuenta.\n2.Reintegro.\n3.Ver el saldo disponible\n0.Salir\n\nUsted ha marcado: " << endl;
  cin >> opc;
  if(opc==1){
     cout << "Bien, escriba el dinero que desee introducir: " << endl;
     cin >> din;
     S=SI+din;
     cout << "Ingreso realizado correctamente. Su saldo actual es de " << S << endl;
  }else if(opc==2){
     cout << "Ahora, teclee la cantidad de capital que desea retirar: " << endl;
     cin >> dan;
     if(dan>SI){
        cout << "Error. No dispone de tanto sueldo." << endl;
     }else{
        S=SI-dan;
        cout << "Reintegro realizado correctamente. Su saldo actual es de " << S << endl;
     }
  }else if(opc==3){
     cout << "Su saldo actual es de " << SI;
  }else if(opc==0){
     cout << "Gracias por utilizar este programa." << endl;
  }else{
     cout << "Disculpe, se ha equivocado al marcar." << endl;
}
  return 0;
}
