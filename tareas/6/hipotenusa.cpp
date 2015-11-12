// 1. no comentado correctamente

/*
Longitud de la hipotenusa de un triángulo rectángulo
Hipotenusa de un triángulo rectángulo calculada según el teorema de Pitágoras

// 2. no cerro el (* /)
*/
#include <iostream>

// 3. no agrego el # para agregar el include
#include  <iomanip>
#include <cmath>
#include <cstdlib>
// 4.no utilizo el namespace
using namespace std;

// 6. Punto y coma indevido en el main
main ()
{
// Declaraciones
float  lado1, lado2, hipotenusa;

// Entrada de datos
cout  << " Cálculo de la hipotenusa \n";
cout  << "de un triángulo rectángulo\n";
cout  <<  "--------------------------\n";
cout  << "Introduce Primer lado:  ";
cin  >> lado1;
cout  <<  "Introduce Segundo lado:  ";
cin  >> lado2 ;

// Cálculos
hipotenusa = sqrt(lado1*lado1 + lado2*lado2);   // Salida de resultados
cout  << "La hipotenusa mide \n" <<  hipotenusa;
system("pause");

}
