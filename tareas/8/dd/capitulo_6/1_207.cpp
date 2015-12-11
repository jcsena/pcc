#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char const *argv[]) {
  int n[10], i;
  for (i = 0; i <= 9; i++) {
    n[i] = 0;
  }

  cout << "Elementos" << "\t" << "Value" <<endl;
  for (i = 0; i <= 9; i++) {
    cout << i << "\t" <<"\t"  << n[i] <<endl;
  }

  return 0;
}
