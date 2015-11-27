

#include <iomanip>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {

  int a, b, c, mayor;

  cout << "Por favor escriba 3 numeros: ";
  cin >> a >> b >> c;

  if( a >= b  && a >= c ){
      mayor  = a;
  }
  else{
      if( b>=a && b>=c ){
        mayor = b;
      }
      else{
        mayor = c;
      }
  }

cout << "El mayor es: " << mayor;

  return 0;
}
