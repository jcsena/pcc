
/*
En el siguiente programa, encierre en un circulo los 10 errores que contiene, 
luego haga el programa y muestre resultados en pantalla.
COMPLETELO ADEMAS PARA QUE SU RESULTADO SEA DOS DECIMALES.
*/
#include <iostream>

//1. es iomanip
#include <iomanip>

//2. es namespace
using namespace std;

//5. punto y coma no debe estar ahi
 main()
{
  //6.falta una coma
	float bma,bme, h,A;

      //7. se utilizo un endl >> no puede ser asignado
      cout << "Bienvenido al programa para calcular areas de trapecios."<<endl;
      cout << "Bien, introduzca la base mayor: ";

      //8. bm no esta definido
      cin >> bma;

      //9. Falto el punto y coma
      cout << "Ahora, escriba la base menor: ";
      cin >> bme;
      cout << "Ya solo necesito la altura: ";

      //10. cin debe asignar >> no "<<"
      cin >>h;

      A = ((bma+bme)*h)/2;

//se agrega los comandos setprecision(numero de decimales) y fixed( repara el numero exponencial )
	cout << "\n El area del trapecio es " << fixed << setprecision(2) <<A <<endl;

//4. no tiene llave
}
