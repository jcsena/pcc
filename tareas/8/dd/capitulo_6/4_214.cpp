#include <iostream>
#include <iomanip>


using namespace std;

int main(int argc, char const *argv[]) {
  const int size = 10;
  int n[size] = {19,3,15,7,11,9,13,5,17,1};
  int i,j;


  cout << "Elementos" << "\t" << "Value" << "\t" << "Histograma" <<endl;
  for (i = 0; i < size; i++) {
    cout << i << "\t" <<"\t"  << n[i] << "\t" <<"\t";
    for ( j = 1; j <= n[i]; j++) {
      cout  << "*";
    }
    cout << endl;

  }

  return 0;
}
