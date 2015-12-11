#include <iomanip>
#include <iostream>


using namespace std;

int main(int argc, char const *argv[]) {

  char cont;
  char letras[] = "ZYXWVTSRQPONMLHJIHGFEDCBA";


  while (true) {
    int ll = 25;
    int min = 0;
    for (int i = 0; i < ll; i++) {
      for ( int s = min; s < ll; s++) {
        cout << letras[s];
      }
      min++;
      cout << endl;
    }

    cout << "Desea repetir[s/n]: " ;
    cin >> cont;
    if(cont == 'n') break;

  }
    return 0;
}
