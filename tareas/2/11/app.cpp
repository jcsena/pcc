/*
11)	** El coste de un automóvil nuevo para un comprador es la suma
total del costo del vehículo, del porcentaje de la ganancia del
vendedor y de los impuestos locales o estatales aplicables (sobre el precio de venta).
Suponer una ganancia del vendedor del 12% en todas las unidades y un impuesto del 6%,
diseñar un PROGRAMA para leer el costo total del automóvil e
imprimir la ganancia del vendedor, el impuesto a pagar y el
coste final del auto para el consumidor.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char const *argv[]) {

  const float porGananciaVendedor = 0.12, porImpuesto = 0.06;
  float costoVehiculo, gananciaVendedor, impuesto, costoParaConsumidor;

  cout << "Por fovor ingresar el costo del vehiculo: ";
  cin >> costoVehiculo;
  gananciaVendedor = porGananciaVendedor * costoVehiculo;
  impuesto = porImpuesto * costoVehiculo;

  costoParaConsumidor = costoVehiculo + gananciaVendedor + impuesto;
 
  cout << "Ganancia del vendor: " << fixed << setprecision(2) << gananciaVendedor << "$" << endl;
  cout << "Impuesto: " << fixed << setprecision(2) << impuesto << "$" << endl;
  cout << "Total costo de vehiculo: " << fixed << setprecision(2) << costoParaConsumidor << "$" << endl;


  return 0;
}
