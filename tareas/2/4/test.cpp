#include <iostream>

//1 iomanip
#include <iomanip>

//3 namespace
using namespace std;

//4 punto y coma
main()
{
  //5 coma
	float bma,bme, h,A;

      //6 mal uso de endl direccion
      cout << "Bienvenido al programa para calcular areas de trapecios."  <<endl;
      cout << "Bien, introduzca la base mayor: ";
      //8 bm no definido
      cin >> bma;
      //9 punto y coma
      cout << "Ahora, escriba la base menor: ";
      cin >> bme;
      cout << "Ya solo necesito la altura: ";
      //7 asigna
      cin >>  h;


      A = ((bma+bme)*h)/2;

	cout << "\n El area del trapecio es " <<A <<endl;

//2 llave
}
