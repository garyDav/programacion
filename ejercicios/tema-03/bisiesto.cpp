/*
 * Elaborar un programa, que determine si un año
 * dado es o no bisiesto. Como un año "es" o "no es" bisiesto
 * (no existen añños más o menos bisiesto) el programa debe
 * contar con una función que devuelva verdadero si el año
 * es bisiesto y falso en caso contrario.
 * */
#include <iostream>
#include <cmath>
using namespace std;

unsigned leerAnio();
bool bisiesto(unsigned a);
void mostramosSiBisiesto(unsigned a, bool r);

int main () {
  unsigned a;
  bool r;

  a = leerAnio();
  r = bisiesto(a);
  mostramosSiBisiesto(a, r);

  return EXIT_SUCCESS;
}

unsigned leerAnio() {
  double a;
  cout.width(15);
  cout<<"Año? ";
  cin>>a;

  if (fmod(a, 1)) {
    cout<<"Error: El año debe ser entero"<<endl;
    exit(EXIT_FAILURE);
  }
  if (a <= 0) {
    cout<<"Error: El año debe ser positivo"<<endl;
    exit(EXIT_FAILURE);
  }

  return unsigned(a);
}

bool bisiesto(unsigned a) {
  if ( !(a % 100) ) a /= 100;
  return !(a % 4);
}

void mostramosSiBisiesto(unsigned a, bool r) {
  cout.width(15);
  cout<<"El año: "<<a<<" ";
  if (r) cout<<"es bisiesto"<<endl;
  else cout<<"no es bisiesto"<<endl;
}
