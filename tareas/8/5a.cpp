#include <iostream>
#include <iomanip>
#include <cctype>

using namespace std;

int main(int argc, char const *argv[]) {
  char initial;
  cout << "Cual es su primer caracter inicia?: ";
  cin >> initial;
  while (!isalpha(initial)) {
    cout << "caracter no alfabetico " << endl;
    cout << "Cual es su siguiente caracter inicial?: ";
    cin >> initial;
  }

  cout << "Terminado!" << endl;

}
