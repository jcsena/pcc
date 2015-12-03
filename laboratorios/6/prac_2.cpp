#include <iomanip>
#include <iostream>


using namespace std;

int main(int argc, char const *argv[]) {

  char cont;
  int a, b, c;

  while (true) {

  cout << "Por favor escriba 3 numeros: ";
  cin >> a >> b >> c;

//primera linea
  if(a > b){
     if(a > c){
       cout << "A es el mayor" <<endl;
     }
     else{
       if(a == c){
         cout << "A y C son los mayores" <<endl;
       }
       else{
         cout << "C es el mayor" <<endl;
       }
     }
  }
  else{
    if(a == b){
        if(a > c){
          cout << "A y B son los mayores" << endl;
        }
        else{
          if(a == c){
            cout << "A, B y C son iguales" << endl;
          }
          else{
           cout << "C es el mayor" << endl;
          }
        }
    }
    else{
      if(b > c){
        cout << "B es el mayor" << endl;
      }
      else{
        if(b == c){
          cout << "B y C son iguales" << endl;
        }
        else{
          cout << "C es el mayor" << endl;
        }
      }
    }

  }


  cout << "Desea repetir[s/n]: " ;
  cin >> cont;
  if(cont == 'n') break;


  }
    return 0;
}
