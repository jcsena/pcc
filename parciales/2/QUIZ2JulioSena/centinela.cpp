#include <iomanip>
#include <iostream>


using namespace std;

int main(int argc, char const *argv[]) {
  int suma = 0, count = 0, num =0;

  while (true) {
    cout << "Por favor digite un numero" <<endl;
    cin >> num;

    if(num == -1) break;

    if (num % 2 != 0) {
      suma += num;
      count++;
    }
  }
  cout << "El numero de impares es: " << count << " y la suma es: " << suma <<endl;

  return 0;
}
