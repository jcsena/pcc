/*7)	En el siguiente programa, encierre en un circulo los 10 errores que contiene,
luego haga el programa y muestre resultados en pantalla.
COMPLETELO ADEMAS PARA QUE SU RESULTADO SEA DOS DECIMALES. (10 Ptos.)
*/


#include <iostream>
//1. include esta mal escrito
#include <iomanip>

//2. esta mal escrito el namespace(std), 3.Falta el punto y coma
using namespace std;
main()
{
  //5. El punto y coma
   float c,I,t,F;
   cout << "Bienvenido. Calcularemos el capital final de un interes simple" <<endl <<endl;

   //6. a cin no se le asignan valores debe ser cout
   cout <<"Por favor, introduce el capital inicial (dolares): ";

   //7. Punto y coma
   cin >> c;
   //4. el tipo de comilla esta
   cout << "Ahora, escribe el interes al que esta colocado: ";
   cin >> I;
   cout << "Por ultimo, inserta el tiempo al que se deja el capital (anios): ";

   //8. Cin asigna valores no recibe
   cin >> t;

   //9. La variable F1 no esta definida
     F = c + c * (I/100)*t;
  //10. existe un punto y coma antes icorrecto
   cout <<endl <<endl << "El capital final es de " << fixed << setprecision(2) << F << " dolares" <<endl <<endl;
}
