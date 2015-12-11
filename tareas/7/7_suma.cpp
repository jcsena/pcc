#include <iomanip>
#include <iostream>
#include <cmath>


using namespace std;

int main(int argc, char const *argv[]) {

  char cont;
  float res;

  cout << fixed << setprecision(2);

  while (true) {

    //1/2 + 2/22 + 3/23 + 4/24 + … + n/2n

     res = ((1/2)) + (2/(pow(2,2))) + (3/(pow(2,3))) + (4/(pow(2,4)));
     cout << "la suma es: " <<  res << endl;

    cout << "Desea repetir[s/n]: " ;
    cin >> cont;
    if(cont == 'n') break;

  }
    return 0;
}
