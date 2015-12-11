#include <iostream>
#include <iomanip>

#define NUM 8

using namespace std;



int main(int argc, char const *argv[]) {

  int nums[NUM], i, total=0;
  for ( i = 0; i < NUM; i++) {
    cout << "Por favor, intrduzca el numero: ";
    cin >> nums[i];
  }

  for ( i = 0; i < NUM; i++) {
    cout << nums[i] << endl;
    total += nums[i];
  }

  cout << "La suma de los numeros es: " << total << endl;

  return 0;
}
