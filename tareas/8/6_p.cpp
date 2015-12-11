#include <iostream>
#include <iomanip>

using namespace std;

char evaluar(int n);


int main(int argc, char const *argv[]) {

  char cont;
  int n;
  while (true) {

    cout << "Por favor escriba un numero entero: ";

    cin >> n;

    cout << "El numero es: " << evaluar(n) << endl;

    cout << "Desea repetir[s/n]: ";
    cin >> cont;
    if(cont == 'n') break;

  }

  return 0;
}

char evaluar(int n){
  if(n <= 0 ) return 'N';
  return 'P';
}
