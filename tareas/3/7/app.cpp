/*

7. Programa que calcula el área de un triángulo (Fórmula de Herón).

#include <stdio.h>
#include <math.h>
void main(){
         float a,b,c,sp,R;
         printf("Bienvenido. Calcularemos el area del triangulo.\n\n");
         printf("Introduce el primer lado: ");
         scanf("%f",&a);
         printf("Ahora, inserta el segundo lado: ");
         scanf("%f",&b);
         printf("Por ultimo, escribe el tercer lado: ");
         scanf("%f",&c);
         sp=(a+b+c)/2;
         R=sqrt(sp*(sp-a)*(sp-b)*(sp-c));
         printf("\nEl area obtenida es %f\n\n",R);
         printf("Muchas gracias por utilizar este progama.\n\n");
}


*/

#include <iomanip>
#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char const *argv[]) {

   float a,b,c,sp,R;

   cout <<  "Bienvenido. Calcularemos el area del triangulo." << endl;
   cout << "Introduce el primer lado: ";
   cin >> a;
   cout << "Ahora, inserta el segundo lado: ";
   cin >> b;
   cout << "Por ultimo, escribe el tercer lado: ";
   cin >> c;

   sp=(a+b+c)/2;
   R=sqrt(sp*(sp-a)*(sp-b)*(sp-c));

   cout << "El area obtenida es: "<< R << endl;
   cout << "Muchas gracias por utilizar este progama" << endl;
  return 0;
}
