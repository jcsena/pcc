#include <iomanip>
#include <iostream>


using namespace std;

int main(int argc, char const *argv[]) {

  char cont;

//program
  int s=0,l=0, n1=0,n2=0,n3=0,n4=0;
  float nota;
  cout << fixed << setprecision(2);


  while (true) {

    cout << "por favor escriba las notas de los entudiantes: ";
    while (true) {
      cin >> nota;
      if(nota == -1 ) break;

      if(nota >=5 ){
        s++;
        // de 5 – suficiente
        // de 6 a 7 – bien
        // 8 – notable
        // de 9 o superior – sobresaliente

        if(nota < 6) n1++;
        else if(nota >= 6 && nota < 8) n2++;
        else if(nota >= 8 && nota < 9) n3++;
        else if(nota >= 9 ) n4++;
      }else{
        l++;
      }
    }

    cout << endl << "Pasaron: " <<  s << endl;
    cout << "Suspendidos: "<< l << endl << endl;

    cout << "suficiente: " << n1 << endl;
    cout << "bien: " << n2 << endl;
    cout << "notable: " << n3 << endl;
    cout << "superior: " << n4 << endl;

    cout << "Desea repetir[s/n]: " ;
    cin >> cont;
    if(cont == 'n') break;

  }
    return 0;
}
