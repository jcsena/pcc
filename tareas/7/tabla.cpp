#include <iomanip>
#include <iostream>


using namespace std;

int main(int argc, char const *argv[]) {

  char cont;
  int min = 100, max = 900;

  while (true) {

    cout << "NUMERO \t" << "DOBLE \t" << "TRIPLE \t" << "CUARTA" << endl;

    for (int i = min; i <= max; i+=200) {

      for (int z = 1; z <= 4; z++) {
        cout << i*z << "\t";
      }
      cout << endl;
    }

    cout << "Desea repetir[s/n]: " ;
    cin >> cont;
    if(cont == 'n') break;

  }
    return 0;
}
