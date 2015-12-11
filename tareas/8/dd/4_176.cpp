#include <iostream>
#include <iomanip>

using namespace std;

long factorial(int);


int main(int argc, char const *argv[]) {
  int x;
  for (x = 1; x <= 10; x++) {
    cout  << "!" << x << " = " << factorial(x) << endl;
  }

  return 0;
}

long factorial(int number){
  if(number <=  1)
    return 1;
  else
    return(number * factorial(number - 1));
}
