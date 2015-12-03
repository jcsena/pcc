#include <iomanip>
#include <iostream>


using namespace std;

int main(int argc, char const *argv[]) {

  char cont;

  while (true) {
    int x,y;
    cout  << "por favor escriba el rango [1-20]: ";

    cin >> x >> y;

    for (int i = 1; i <= y; i++) {
      for ( int j = 1; j < x; j++) {
        cout << "@";
      }
      cout << endl;
    }

    cout << "Desea repetir[s/n]: " ;
    cin >> cont;
    if(cont == 'n') break;

  }
    return 0;
}
