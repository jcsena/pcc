/*
desarrolle un programa que permita escribir el nombre y apellido y que permita capturar dos nuemeros y luego mostrar la suma
*/

#include<iostream>
#include<iomanip>

using namespace std;

main(){

string nom, ape;
float prinum, segnum, total;

cout << "digite su nombre y apellido" << endl;

cin >> nom >> ape;

cout <<  "digite el primer numero" << endl;

cin >> prinum;

cout << "digite el segundo numero" << endl;

cin >> segnum;

//se realiza la operacion de la suma de dos numeros
total = prinum + segnum;

//se realiza la impresion de los datos solicitados
cout << "tu nombre es "<< nom << " " << ape << endl;

cout << "suma de numeros es " << total << endl;


}
