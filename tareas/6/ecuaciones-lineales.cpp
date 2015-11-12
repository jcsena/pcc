/*
Un sistema de ecuaciones lineales
ax + by = c
dx + ey = f
se puede resolver con las siguientes fórmulas:

			x =    ce – bf                      y =    af - cd
 			         ae - bd		               ae - bd

Diseñar un programa que lea dos conjuntos de coeficientes (a, b y c; d, e y f dos grupos por separado)
y visualice los valores de x e y. Luego compare si x es mayor que y e imprima que es x es mayor que y
de lo contrario que imprima que y es mayor que x.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char const *argv[]) {

  /*
    @a: coeficiente grupo 1 capturador por pantalla
    @b: coeficiente grupo 1 capturador por pantalla
    @c: coeficiente grupo 1 capturador por pantalla
    @d: coeficiente grupo 2 capturador por pantalla
    @e: coeficiente grupo 2 capturador por pantalla
    @f: coeficiente grupo 2 capturador por pantalla
    @x: resultado de la primera ecuancion lienal
    @y: resultado de la segunda ecuancion lienal
  */
  float a,b,c,d,e,f,x,y;

  cout << "Por favor ingrese el primer grupo de coeficientes: ";
  // se captura el primer grupo de coeficientes
  cin >> a >> b >> c;

  cout << "Por favor ingrese el segundo grupo de coeficientes: ";
  // se captura el segundo grupo de coeficientes
  cin >> d >> e >> f;

  // calculo de la ecuancion linea en x
  x = ( (c * e) - (b * f) ) / ( (a * e) - (b * d) );

  // calculo de la ecuancion linea en y
  y = ( (a * f) - (c * d)) / ( (a * e) - (b * d) );

  // se valida el resultado de la ecuanciones ( mayor o menor o igual)
  if ( x > y) {
    cout << "x es mayor que y" << endl;
  } else if ( x < y ) {
    cout << "y es mayor que x" << endl;
  } else {
    cout << "son iguales" << endl;
  }

return 0;

}
