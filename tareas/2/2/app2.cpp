/*
2)	Dada la cantidad de Billetes EN DOLARES DE 5,10,20,
PERMITA INTRODUCIR LA CANTIDAD DE CADA UNO, CALCULE EL MONTO TOTAL E IMPRIMA A
PANTALLA CUANTOS BILLETES FUERON DE CADA UNO , EL IMPORTE TOTAL POR CADA DENOMINACION
ASI COMO EL IMPORTE TOTAL CALCULADO (10 Ptos.)
*/

#include "iostream"
#include <iomanip>

using namespace std;

int main(int argc, char const *argv[]) {

/**
 * [@den5: Esta variable recibira un numero de billetes de 5 por pantalla]
 * [@den10: Esta variable recibira un numero de billetes de 10 por pantalla]
 * [@den20: Esta variable recibira un numero de billetes de 20 por pantalla]
 * [@total5: El resultado de la multiplicacion de 5 * la @den5]
 * [@total10: El resultado de la multiplicacion de 10 * la @den10]
 * [@total20: El resultado de la multiplicacion de 20 * la @den20]
 * [@grantotal: El resultado de la suma de todos los totales]
 */
int den5,
den10,
den20,
total5,
total10,
total20,
grantotal = 0;

//se solicita la catidad de billetes de 5, 10 y 20
cout << "Por favor detalle la cantidad de billetes de 5: ";
cin >> den5;
cout << "Por favor detalle la cantidad de billetes de 10: ";
cin >> den10;
cout << "Por favor detalle la cantidad de billetes de 20: ";
cin >> den20;

//se realiza la multiplicacion de todas las denominaciones
total5 = den5 * 5;
total10 = den10 * 10;
total20 = den20 * 20;

//se realiza la suma de todas la denominaciones
grantotal = total5 + total10 + total20;


//impresion por pantall
cout << "La cantidad de billetes 5 es: " << den5 << " , y la catidad es $" << total5 << endl;
cout << "La cantidad de billetes 10 es: " << den10 << " , y la catidad es $" << total10 << endl;
cout << "La cantidad de billetes 20 es: " << den20 << " , y la catidad es $" << total20 << endl;
cout << "El total general es $" << grantotal << endl;


return 0;

}
