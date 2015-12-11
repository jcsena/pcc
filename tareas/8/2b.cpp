#include <iostream>
#include <iomanip>

using namespace std;

float doble(float x, float y)
{
  return (x + y)/2;
}

int main(int argc, char const *argv[]) {
  float  m, n;
  
  cout << fixed << setprecision(4);
  do {
    cout << "Introducir 2 numeros reales: ";
    cin >> m >> n;
    cout << "La media es: " << doble(m,n) << endl;
  } while(m != 0);

  return 0;
}
