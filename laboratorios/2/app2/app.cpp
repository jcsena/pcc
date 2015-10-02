// #include <stdio.h>
// void main(){
//          int B,H,A;
//          printf("Por favor, introduzca la base del triangulo");
//          scanf("%d",&B);
//          printf("Ahora, inserte la altura del mismo");
//          scanf("%d",&H);
//          A=B*H/2;
//          printf("\nSu area es de %d\n\n",A);
// }

#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char const *argv[]) {

  int B, H, A;
  cout << "Por favor, introduzca la base del triangulo: "; cin >> B;
  cout << "Ahora, inserte la altura del mismo: "; cin >> H;

  A=(B*H)/2;

  cout << "Su area es de: " << A << endl;

  return 0;
}
