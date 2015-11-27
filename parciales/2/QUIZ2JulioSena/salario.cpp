#include <iomanip>
#include <iostream>


using namespace std;

int main(int argc, char const *argv[]) {

  string nombre;
  float salario, porc = 0, aumento, nSalario;
  int cat;


  cout << "Categoria | Aumento" <<endl;
  cout << "    1     |   5\%" <<endl;
  cout << "    2     |   10\%" <<endl;
  cout << "    3     |   12\%" <<endl;
  cout << "    4     |   14\%" <<endl;

  cout << "Por favor digite su salario: ";
  cin >> salario;

  cout << "Por favor escriba su nombre: ";
  cin >> nombre;

  cout << "Por favor escriba la categoria:[1-4] ";
  cin >> cat;

switch (cat) {
  case 1: porc = 0.05; break;
  case 2: porc = 0.1;break;
  case 3: porc = 0.12;break;
  case 4: porc = 0.14;break;
}

aumento = porc *  salario;

nSalario = salario + aumento;

cout << "Nombre: "<< nombre << endl;
cout << "Salario Actual: " << salario << endl;
cout << "Categoria: " << cat << endl;
cout << "Aumento: "<< aumento << endl;
cout << "Nuevo Salario: "<< nSalario << endl;


  return 0;
}
