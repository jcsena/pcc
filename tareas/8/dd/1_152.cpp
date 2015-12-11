#include <iostream>
#include <iomanip>

using namespace std;

int square(int);


int main(int argc, char const *argv[]) {
  int x;
  for (x = 1; x <= 10; x++) {
    cout << square(x) << endl;
  }

  return 0;
}

int square(int n){
  return n * n;
}
