#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char const *argv[]) {

  char nombre[40];
  float cal1, cal2, cal3, cal4,prome;

  cout << fixed;
  cout << "Nombre del alumno: ";
  gets(nombre);

  cout << "Calificacion 1: "; cin >> cal1;
  cout << "Calificacion 2: "; cin >> cal2;
  cout << "Calificacion 3: "; cin >> cal3;
  cout << "Calificacion 4: "; cin >> cal4;

  prome = (cal1 + cal2 + cal3 + cal4)/4;

  cout << nombre << endl;
  cout << "EL promedio es: " << setprecision(3) << prome << endl;


  return 0;
}
