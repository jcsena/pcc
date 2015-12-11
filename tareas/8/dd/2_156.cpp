#include <iostream>
#include <iomanip>

using namespace std;

int maximun(int, int, int);


int main(int argc, char const *argv[]) {
  int x, y, z;

  cout << "Escriba 3 entero: ";
  cin >> x >> y >> z;

  cout << "El maximo es: "<< maximun(x, y, z) << endl;


  return 0;
}

int maximun(int x, int y, int z){
  int max = x;
  if(y > max)
  max = y;
  if(z > max)
  max = z;
  return max;
}
