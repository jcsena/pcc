/* Programa que con vierte pulgadas a
centímetros sabiendo que 1 pulgada = 2.54 cm
por ejemplo, 28 pulgadas son 71.12. */

#include <iostream>
#include <iomanip>

using namespace std;
 main ()	{
	   float  cms, plg;
	   cout << "Introduzca cantidad de pulgadas: " << endl;
	   cin >> plg;
	  cms = plg * 2.54;

	cout << endl;
	cout << plg << " pulgadas son " << cms <<" centimetros ";
}
