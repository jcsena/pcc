#include <iomanip>
#include <iostream>


using namespace std;

int main(int argc, char const *argv[]) {

  char cont;
  int num;

  while (true) {

    cout << "Por favor escriba un numero: ";
    cin >> num;

    for (int i = 1; i <= 12; i++) {
      cout << num << " x " << i << " = " << num * i << endl;
    }

    cout << "Desea repetir[s/n]: " ;
    cin >> cont;
    if(cont == 'n') break;

  }
    return 0;
}
