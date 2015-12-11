#include <iostream>
#include <iomanip>

//error #1 namesbace
using namespace std;
// #2
int main()
   {
    //#3 , #4
    char cont = 's';
    int contador = 0;

  //#5, 6
	while (cont == 's'|| cont == 'S') {
	system ("cls")	;
    contador = 0;
      while (contador < 5) {
		cout <<"x: " << contador << endl << endl; //printf(" x: %d\n",contador++);
		++contador;

		}

	cout <<"desea continuar si=s - no = n : ";
	cin  >> cont;

	}
  return 0;
}
