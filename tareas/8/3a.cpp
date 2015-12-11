#include <iostream>
#include <iomanip>
#include <cstdarg>

using namespace std;

void maximo(int n, ...);

int main(int argc, char const *argv[]) {
  cout << "PRIMERA BUSQUEDA DEL MAXIMO" << endl;
  maximo(6, 3.0, 4.0,-12.5, 1.2, 4.5, 6.4);
  cout << "NUEVA BUSQUEDA DEL MAXIMO" << endl;
  maximo(4, 5.4, 17.8, 5.9, -17.99);
  return 0;
}

void maximo(int n, ...){
  cout << fixed << setprecision(2);
  double mx, actual;
  va_list puntero;
  int i;
  va_start(puntero,n);
  mx = actual = va_arg(puntero, double);
  cout << "argumento actual es: " << actual << endl ;
  for (i = 2; i <= n; i++) {
    actual = va_arg(puntero,double);
    cout << "argumento actual es: " << actual << endl;
    if(actual > mx){
      mx = actual;
    }
  }
  cout << "Maximo de la lista de " << n << " es: "<< mx << endl;
  va_end(puntero);
}
