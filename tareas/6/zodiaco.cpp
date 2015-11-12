//
// Copyright (c) 2015 by Julio Seña. All Rights Reserved.
//

/**
 1.	DISEÑE UN PROGRAMA QUE:					(10 puntos)
 1.	Muestre el listado de los signos del zodiaco con sus números asociados.
 2.	Pedirá un número entero a través de teclado asociado a un signo del zodiaco.
 3.	Mostrará como resultado el NOMBRE DEL SIGNO Y A LA CATEGORIA QUE PERTENECE.

 */

#include <iomanip>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {

  int signo;
  cout << "1. Aries" << endl;
  cout << "2. Tauro" << endl;
  cout << "3. Geminis" << endl;
  cout << "4. Cancer" << endl;
  cout << "5. Leo" << endl;
  cout << "6. Virgo" << endl;
  cout << "7. Libra" << endl;
  cout << "8. Escorpio" << endl;
  cout << "9. Sagitario" << endl;
  cout << "10. Capricornio" << endl;
  cout << "11. Acuario" << endl;
  cout << "12. Piscis" << endl;

  cout << "Por favor elija un signo(numero): ";
  cin >> signo;

  switch (signo) {
    case 1:
      cout << "signo: Aries, categoria: Fuego" << endl;
      break;
    case 2:
      cout << "signo: Tauro, categoria: Tierra" << endl;
      break;
    case 3:
      cout << "signo: Geminis, categoria: Aire" << endl;
      break;
    case 4:
      cout << "signo: Cancer, categoria: Agua" << endl;
      break;
    case 5:
      cout << "signo: Leo , categoria: Fuego" << endl;
      break;
    case 6:
      cout << "signo: Virgo, categoria: Tierra" << endl;
      break;
    case 7:
      cout << "signo: Libra, categoria: Aire" << endl;
      break;
    case 8:
      cout << "signo: Escorpio, categoria: Agua" << endl;
      break;
    case 9:
      cout << "signo: Sagitario, categoria: Fuego" << endl;
      break;
    case 10:
      cout << "signo: Capricornio, categoria: Tierra" << endl;
      break;
    case 11:
      cout << "signo: Acuario, categoria: Aire" << endl;
      break;
    case 12:
      cout << "signo: Piscis, categoria: Agua" << endl;
      break;
    default:
      cout << "Caracter invalido";

  }

  return 0;
}
