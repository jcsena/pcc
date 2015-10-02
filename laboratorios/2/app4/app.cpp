#include <iostream>
#include <iomanip>

#ifndef pi
#define pi 3.1416
#endif

using namespace std;

int main(int argc, char const *argv[]) {

  float A, P, r;
  cout << "Dame el radio del circulo: ";
  cin >> r;

  A = pi * r * r;
  P = 2 * pi * r;

  cout << fixed;

  cout << "El area del circulo es: " <<  setprecision(1) << A << endl;
  cout << "El perimetro del circulo es: " << setprecision(1) << P  << endl;

  return 0;
}


//calculando el area y perimentro del circulo
