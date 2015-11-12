/*
1.	Calcular el área de un triángulo mediante la fórmula:
Área = (p٠ (p - a)٠(p - b)٠(p - c))1/2 Donde p es el semiperímetro,
p = (a + b + c)/2,  siendo a, b, c los tres lados del triángulo
Si el área es mayor a 100 entonces imprimirá que los lados del
triángulo cumplen con los valores óptimos, de lo contrario
imprimirá los valores de los lados del triángulo e imprimirá
el mensaje que indique que dichos valores no cumplen con los
requisitos.
*/

#include <iomanip>
#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[]) {

  /*
   a: lado a del triangulo
   b: lado b del triangulo
   c: lado c del triangulo
   sp: semiperimetro del triangulo
   R : Area del triangulo
 */
   float a,b,c,sp,R;

   cout << fixed << setprecision(2);
   cout <<  "Bienvenido. Calcularemos el area del triangulo." << endl;
   cout << "Introduce el primer lado: ";
   cin >> a;
   cout << "Ahora, inserta el segundo lado: ";
   cin >> b;
   cout << "Por ultimo, escribe el tercer lado: ";
   cin >> c;

   sp=(a+b+c)/2;
   R=sqrt(sp*(sp-a)*(sp-b)*(sp-c));

   if ( R > 100 ) {
     cout << "Los lados del triángulo cumplen con los valores óptimos" << endl;
   } else {
     cout << "lado a: " << a << endl;
     cout << "lado b: " << b << endl;
     cout << "lado c: " << c << endl;
     cout << "los lados del triángulo no cumplen con los requisitos." << endl;
   }

  return 0;
}
