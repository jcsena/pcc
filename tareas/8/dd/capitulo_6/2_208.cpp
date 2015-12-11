#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char const *argv[]) {
  int n[10]= {32, 27, 64, 18,95, 14, 90, 70, 60, 37};
  int i;


  cout << "Elementos" << "\t" << "Value" <<endl;
  for (i = 0; i <= 9; i++) {
    cout << i << "\t" <<"\t"  << n[i] <<endl;
  }

  return 0;
}
