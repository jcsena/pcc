#include <iostream>
#include <iomanip>

using namespace std;

int sumaDeEnteros(const int ArrayEnteros[], int noElementos);
int maximo(const int ArrayEnteros[], int noElementos );

int main(int argc, char const *argv[]) {
  int items[10];
  int i;

  cout << "Introduzca 10 numeros, seguidos por return";
  for ( i = 0; i < 10; i++) {
    cin >> items[i];
  }
  cout << "Total = " <<  sumaDeEnteros(items,10) << endl;
  cout << "Valor maximo = " << maximo(items,10) << endl;

}

int sumaDeEnteros(const int ArrayEnteros[], int noElementos){
  int i=0, Total = 0;
  for ( i = 0; i < noElementos; i++) {
    Total += ArrayEnteros[i];
  }
  return Total;
}

int maximo(const int ArrayEnteros[], int noElementos ){
  int mx;
  int i;
  mx = ArrayEnteros[0];
  for (i = 1; i < noElementos; i++) {
    mx = (ArrayEnteros[i] > mx ? ArrayEnteros[i]: mx);
  }
  return mx;
}
