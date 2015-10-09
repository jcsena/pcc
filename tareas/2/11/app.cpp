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

// porcentaje de gananacia del vendedor
#define porGananciaVendedor 0.12

// porcentaje de impuesto
#define porImpuesto 0.06

using namespace std;

int main(int argc, char const *argv[]) {

  /**
   * [@costoVehiculo: El valor del costo de vehilculo neto capturado por pantalla]
   * [@gananciaVendedor: Resultado de la operacion realizada para calcular el valor de gananacia de vendedor ]
   * [@impuesto: Resultado de la operacion realizada para calcular el monto del impuesto ]
   * [@costoParaConsumidor: Costo total del auto con impuesto y ganancia del vendedor del vendedor ]
   */
  float costoVehiculo, gananciaVendedor, impuesto, costoParaConsumidor;

  //se recibe el consto del vehiculo
  cout << "Por fovor ingresar el costo del vehiculo: ";
  cin >> costoVehiculo;

  //se calcula la ganacia del servidor
  gananciaVendedor = porGananciaVendedor * costoVehiculo;

  //se calcula el impuesto del vehiculo
  impuesto = porImpuesto * costoVehiculo;

  //se calcula el costo para el consumidor
  costoParaConsumidor = costoVehiculo + gananciaVendedor + impuesto;

  // se imprime los valores  solictados
  cout << "Ganancia del vendor: " << fixed << setprecision(2) << gananciaVendedor << "$" << endl;
  cout << "Impuesto: " << fixed << setprecision(2) << impuesto << "$" << endl;
  cout << "Total costo de vehiculo: " << fixed << setprecision(2) << costoParaConsumidor << "$" << endl;


  return 0;
}
