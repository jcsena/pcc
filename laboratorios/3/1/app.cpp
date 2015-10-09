/**
 * Escriba un programa que calcule el area de un triangulo utilizando la formular de HERON
 * donde Area = sqrt(sp * (sp * (sp - a) * (sp -b) * (sp -c) ) )
 * donde sp = (a + b + c) /2
 * lados del triangulo
 */

 #include <iostream>
 #include <iomanip>
 #include <cmath>

 using namespace std;

 int main(int argc, char const *argv[]) {
   /**
    * @a: lado 1
    * @b: lado 2
    * @c: lado 3
    */
    float  a,b,c, area, sp;

    //se captura los lados del triangulo
    cout << "Por favor digite el lado 1 : ";
    cin >> a ;
    cout << "Por favor digite el lado 2 : ";
    cin >> b ;
    cout << "Por favor digite el lado 3 : ";
    cin >> c;

    //se calcula sp
    sp = (a + b + c)/2;

    area = sqrt(sp * (sp - a) * (sp - b) * (sp - c) );

    //imprime el area del triangulo
    cout << area << endl;

   return 0;
 }
