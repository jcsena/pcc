#include <iomanip>
#include <iostream>


using namespace std;

int main(int argc, char const *argv[]) {

  char cont;

  int m=1, e=39,l, di,r1,r2;

  cout << "Bienvenido!" << endl;

  while (true) {
    cout << "Ahora bien, De cuantas lineas desea imprimir su trinagulo?: ";
    cin >> l;
    e = ((l - 1) * 2) + 1;

    for (int i = m; i <= e; i+=2) {
      di = (e - i)/2;
      r1 =  m + di;
      r2 =  e - di;
      for (int x = m; x <= e ; x++) {
        if(x >= r1 && x <= r2) cout << " * ";
        else cout << "   ";
      }
      cout << endl;
    }
  cout << "Desea repetir[s/n]: " ;
  cin >> cont;
  if(cont == 'n') break;
  }
    return 0;
}
