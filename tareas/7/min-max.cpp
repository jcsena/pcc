#include <iomanip>
#include <iostream>


using namespace std;

int main(int argc, char const *argv[]) {

  char cont;

//program
  int n, min, max;

  while (true) {

    cout << "Por favor escriba los numeros: ";
    cin >> n;
    if(n != -1 ){
    min = n;
    max = n;
    while (true) {
      cin >> n;
      if(n == -1 ) break;
      if(n < min) min = n;
      if(n > max) max = n;
    }
  };

    if(min != 32767){
      cout << "Numero minimo es: " << min << endl;
      cout << "Numero maximo es: " << max << endl;
    }


    cout << "Desea repetir[s/n]: " ;
    cin >> cont;
    if(cont == 'n') break;

  }
    return 0;
}
