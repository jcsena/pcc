/**
Programa que pide dos numeros enteros por teclado
y deternmina si es divisible o no divisible
 */

#include <iomanip>
#include <iostream>

#define RESET   "\033[0m"
#define BLACK   "\033[30m"      /* Black */
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"      /* Yellow */
#define BLUE    "\033[34m"      /* Blue */
#define MAGENTA "\033[35m"      /* Magenta */
#define CYAN    "\033[36m"      /* Cyan */
#define WHITE   "\033[37m"      /* White */
#define BOLDBLACK   "\033[1m\033[30m"      /* Bold Black */
#define BOLDRED     "\033[1m\033[31m"      /* Bold Red */
#define BOLDGREEN   "\033[1m\033[32m"      /* Bold Green */
#define BOLDYELLOW  "\033[1m\033[33m"      /* Bold Yellow */
#define BOLDBLUE    "\033[1m\033[34m"      /* Bold Blue */
#define BOLDMAGENTA "\033[1m\033[35m"      /* Bold Magenta */
#define BOLDCYAN    "\033[1m\033[36m"      /* Bold Cyan */
#define BOLDWHITE   "\033[1m\033[37m"      /* Bold White */

using namespace std;

int main(int argc, char const *argv[]) {
  /**
   * @entero1: entero 1 entero capturado por pantalla
   * @entero2: entero 2 entero capturado por pantalla
   */

  int entero1, entero2;

   //se reciben los valores enteros
   cout << "Por favor digite el primer entero: ";
   cin >> entero1;
   cout << "Por favor digite el segundo entero: ";
   cin >> entero2;

   if(entero1%entero2 == 0){
     cout << BOLDMAGENTA << entero1 << BOLDGREEN <<" es divisible entre " << BOLDCYAN << entero2 <<endl;
   }
   else{
     cout << BOLDMAGENTA << entero1 << BOLDRED <<" NO es divisible entre " << BOLDCYAN << entero2 <<endl;

   }


}
