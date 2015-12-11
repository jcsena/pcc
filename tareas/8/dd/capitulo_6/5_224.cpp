#include <iostream>
#include <iomanip>


using namespace std;

int main(int argc, char const *argv[]) {
  const int size = 10;
  int n[size] = {2,6,4,8,10,12,89,68,45,37};
  int i,pass, hold;

  cout << "Impresion data original "<< endl;

  for (i = 0; i < size; i++) {
    cout << n[i] << '\t' ;
  }
  for (pass = 1; pass < size; pass++) {

    for ( i = 0; i < size - 1 ; i++) {
      if(n[i] > n[i + 1]){
        hold = n[i];
        n[i] = n[i + 1];
        n[i + 1] = hold;
      }
    }

  }

  cout << endl<<"Impresion data ordenada "<< endl;

  for (i = 0; i < size; i++) {
    cout << n[i] << '\t' ;
  }

  return 0;
}
