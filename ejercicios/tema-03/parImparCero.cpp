#include<cmath>
#include<iostream>
using namespace std;

int leerNumero();
int parImparCero(int num);
void mostrarSiPar(int res);

int main() {
  // Declaración de variables
  int num, res;

  // Asignación de variables
  num = leerNumero();
  res = parImparCero(num);
  mostrarSiPar(res);

  return EXIT_SUCCESS;
}

int leerNumero() {
  double num=0;
  cout.width(15);
  cout<<"Número? ";
  cin>>num;
  if (!num) {
    cout<<"Error: No es un número."<<endl;
    exit(EXIT_FAILURE);
  }
  if (fmod(num, 1)) {
    cout<<"Error: El número debe ser un entero."<<endl;
    // exit(EXIT_FAILURE);
    leerNumero();
  }

  return (int)num;
}

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
    default:
      cout<<"No introduciste un número."<<endl;
      break;
  }
}

