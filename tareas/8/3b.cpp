#include <iostream>
#include <iomanip>

using namespace std;

long fibonacci();


int main(int argc, char const *argv[]) {
  int n, i;
  cout << "Cuantos numero de fibonacci?: ";
  cin >> n;
  cout << "Secuencia de fibonacci: 0,1";

  for (i = 2; i < n; i++) {
    cout << "," <<fibonacci();
  }
  cout << endl;
  return 0;
}

long fibonacci(){
  static int x = 0;
  static int y = 1;
  y = y + x;
  x = y - x;
  return y;
}
