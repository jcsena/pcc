#include <iomanip>
#include <iostream>


using namespace std;

int main(int argc, char const *argv[]) {

  for (int i = 33; i <= 55; i++) {
    if(i % 5 == 0) cout << i << " ";
  }
  return 0;
}
