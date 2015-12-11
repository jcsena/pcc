#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char const *argv[]) {
  char n, cont;

  while (true) {
    cout << "Escriba un caracter: ";

    cin >> n;

    cout << "ASCII es: " <<  int(n) << endl;

    cout << "Desea repetir[s/n]: ";
    cin >> cont;

    if(cont == 'n') break;

  }

}
  
