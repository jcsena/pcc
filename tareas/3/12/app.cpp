// #include <stdio.h>
// #include <math.h>
// void main(){
//          float a,b,c,R;
//          printf("Bienvenido, obtendremos la media geometrica de tres numeros.\n\n");
//          printf("Por favor, introduzca el primer numero: ");
//          scanf("%f",&a);
//          printf("Ahora, inserte el segundo numero: ");
//          scanf("%f",&b);
//          printf("Por ultimo, escriba el tercer numero: ");
//          scanf("%f",&c);
//          R=cbrt(a*b*c);
//          printf("\nEl resultado es %f\n\n",R);
// }

#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;
int main(int argc, char const *argv[]) {
    float a,b,c,R;
    cout << "Bienvenido, obtendremos la media geometrica de tres numeros." << endl;
    cout << "Por favor, introduzca el primer numero: ";
    cin >> a;
    cout << "Por favor, introduzca el segundo numero: ";
    cin >> b;
    cout << "Por favor, introduzca el tercer numero: ";
    cin >> c;

    R = sqrt(a*b*c);
    cout << endl << "El resultado es: "<< R << endl;

  return 0;
}
