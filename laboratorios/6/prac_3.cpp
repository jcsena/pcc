#include <iomanip>
#include <iostream>


using namespace std;

int main(int argc, char const *argv[]) {

  float edad, porc = 0, costo;
  int cat, dias;


  cout << "TEfermedad | Costo" <<endl;
  cout << "    1      |   25" <<endl;
  cout << "    2      |   16" <<endl;
  cout << "    3      |   20" <<endl;
  cout << "    4      |   32" <<endl;

  cout << "Por favor digite tipo de enfermedad :[1-4] ";
  cin >> cat;

  cout << "Por favor digite su edad: ";
  cin >> edad;

  cout << "Por favor escriba su dias: ";
  cin >> dias;



switch (cat) {
  case 1: porc = 25; break;
  case 2: porc = 16;break;
  case 3: porc = 20;break;
  case 4: porc = 32;break;
}

if(edad >= 14  &&  edad <= 22){
  porc = porc + (porc * 0.10);
}


costo = porc * dias;;

cout << "dias: "<< dias << endl;
cout << "Edad Actual: " << edad << endl;
cout << "Tipo Efermedad: " << cat << endl;
cout << "Costo: "<< costo << endl;


  return 0;
}
