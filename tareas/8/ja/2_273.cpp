#include <iostream>
#include <iomanip>

using namespace std;

void leer(int a[][5]);
void visualizar(const int a[][5]);


int main(int argc, char const *argv[]) {
  int a[3][5];
  leer(a);
  visualizar(a);
  return 0;
}

void leer(int a[][5]) {
  int i,j;
  cout << "Introduzca 15 numeros enteros, 3 por fila: ";
  for (i = 0; i < 3; i++) {
    cout << "Fila "<< i << ": ";
    for (j = 0; j < 5; j++) {
      cout << "\t";
      cin >> a[i][j];
    }
  }

}

void visualizar(const int a[][5]){
  int i,j;
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 5; j++) {
      cout << a[i][j] << "\t" ;
    }
    cout << endl;
  }
}
