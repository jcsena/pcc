#include <iomanip>
#include <iostream>


using namespace std;

int main(int argc, char const *argv[]) {

  char cont;
  int min=20, max=40, n, i, a;

  while (true) {

  cout << "Los numeros primos entre 2 y 40 son: " << endl;
  n = min;
  while (n >= min && n<= max) {
          a = 0;
         for(i=1;i<(n+1);i++){
         if(n%i==0){
             a++;
            }
         }
         if(a==2){
              cout << "Numero primo: "<< n << endl;
            }

    n++;
  }

  cout << "Desea repetir[s/n]: " ;
  cin >> cont;
  if(cont == 'n') break;

  }
    return 0;
}
