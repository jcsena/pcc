/*
calcula el precio de un viaje sabiendo que este se paga por km y cada mk se paga por 0.25
pida por teclado cantidad de km, Debera imprimir en pantalla, cunantos km se recorrienron
y el costo total a pagar por el viaje.
 */

#include <iomanip>
#include <iostream>

// constante de valor por kilometros 0.25
#define porKm 0.25
using namespace std;

int main(int argc, char const *argv[]) {

  /**
   * @precioViaje [contendra el valor de costo del viaje]
   * @catidadKm [cantidad de kilomentros recorridos que se ingresaran por pantalla]
   */
  float precioViaje, catidadKm;

  //Limita el numero de decimales a 2
  cout << fixed << setprecision(2);
  cout << "Bienvenido!" << endl;

  //ingresos de los kilomentros del viaje
  cout << "Por favor ingrese la cantidad de km: ";
  cin >> catidadKm;

  //se calcula el valor de viaje utilizando el valor por kilomentros multiplicado por el numero de kilometros
  precioViaje = porKm * catidadKm;

  cout  << "Total kilometros: " << catidadKm  << ", Precio del viaje: " << precioViaje<< "$" << endl;

  return 0;
}
