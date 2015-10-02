/*
5)	Una tienda ofrece un descuento del 15% sobre el total
de la compra HECHA POR UN CLIENTE y el mismo desea
saber cuánto deberá pagar finalmente por su compra.
Imprima el total de la compra, de cuanto es el descuento
(en dólares) y el total a pagar por el cliente ya con el descuento.
Haga el ALGORITMO de este programa      (5 Ptos.)*/

#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char const *argv[]) {

  float monto, desc, totalCompra;

  cout << "Describa el monto de cuenta: ";
  cin >> monto;

  desc = monto * 0.15;

  totalCompra = monto - desc;

  cout << "SubTotal: " << fixed << setprecision(2) << monto << "$" << endl;
  cout << "Descuento: "<< fixed << setprecision(2) << desc << "$" << endl;
  cout << "Total: "<< fixed << setprecision(2) <<totalCompra << "$" <<endl;

  return 0;
}
