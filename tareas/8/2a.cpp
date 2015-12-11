#include <iostream>
#include <iomanip>

using namespace std;

int max(int x, int y)
{
  if (x < y) return y;
  else return x;
}

int main(int argc, char const *argv[]) {
  int  m, n;
  do {
    cin >> m >> n;
    cout << "el numero mayor es: " << max(m,n) << endl;
  } while(m != 0);

  return 0;
}
