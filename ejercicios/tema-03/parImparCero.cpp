#include <iostream>
using namespace std;

int leerNumero() {
  double num;
  cout.width(15);
  cout<<"Número: ";
  cin>>num;
  if (fmod(num, 1)) {
    cout<<"Error: El número debe ser un entero."<<endl;
    exit(EXIT_FAILURE);
  }

  return (int)num;
}

// Retorna 0, si num es cero, 1 si es impar y 2 si es par
int parImparCero(int num) {
  if (!num) return 0;

  if (num % 2)
    return 1;
  else
    return 2;
}

void mostrarSiPar(int res) {
  cout.width(15);
  cout<<"El número es: ";
  switch (res) {
    case 0:
      cout<<"cero."<<endl;
      break;
    case 1:
      cout<<"impar."<<endl;
      break;
    case 2:
      cout<<"par."<<endl;
      break;
  }
}

int main() {
  int num, res;

  num = leerNumero();
  res = parImparCero(num);
  mostrarSiPar(res);

  return EXIT_SUCCESS;
}

