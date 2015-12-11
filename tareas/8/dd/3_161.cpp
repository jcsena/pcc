#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main(int argc, char const *argv[]) {
  int i;

  for ( i = 1; i <= 20; i++) {
    cout << "\t"<<(rand() % 6) + 1;
    if( i % 5 == 0) cout << endl;
  }

  return 0;
}
