#include <iostream>
#include <iomanip>


using namespace std;

int main(int argc, char const *argv[]) {
  const int size = 10;
  int n[size];
  int i;

  for (i = 0; i < size - 1; i++) {
    n[i] = 2 + (2 * i);
  }


  cout << "Elementos" << "\t" << "Value" <<endl;
  for (i = 0; i <= 9; i++) {
    cout << i << "\t" <<"\t"  << n[i] <<endl;
  }

  return 0;
}
