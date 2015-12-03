#include <iomanip>
#include <iostream>


using namespace std;

int main(int argc, char const *argv[]) {

  char cont;
  float monto, compra;

  while (true) {

  cout << "Digite monto: " << endl;

  cin >> monto;

  if(monto < 500)
    compra = monto;
  else if(monto >= 500 && monto <= 1000)
    compra =  (monto * 0.05) + monto;
  else if(monto > 1000 && monto <= 7000)
      compra = (monto * 0.11) + monto;
  else if(monto > 7000 && monto <= 15000)
      compra = (monto * 0.18) + monto;
  else
      compra = (monto * 0.18) + monto;

  cout << "monto total es: " << fixed << setprecision(2) <<compra << "$" << endl << endl;


  cout << "Desea repetir[s/n]: " ;
  cin >> cont;
  if(cont == 'n') break;


  }
    return 0;
}
