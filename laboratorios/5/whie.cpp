#include <iostream>
#include <iomanip>
#include <locale>


using namespace std;
int main(int argc, char const *argv[]) {

  float a,b,c, sum;

  char next;
  while (true) {
    cout << "Escriba los numeros: " << endl;
    cin >> a >> b >> c;
    sum = a + b +c;
    cout << "suma de numeros: " << sum << endl;
    cout << "desea continuar(s/n)";
    cin >> next;
    if(next == 'n' || next == 'N' ) break;

  }

  return 0;
}
