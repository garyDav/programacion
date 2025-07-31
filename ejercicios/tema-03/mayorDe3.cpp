/*
 * Elaborar un programa que lea tres números
 * reales, y encuentre el mayor de estos y
 * muestre decho valor.
 * */
#include <iostream>
#include <cmath>
using namespace std;

void leerNumeros(double &a, double &b, double &c);
double mayor(double a, double b, double c);
void mostrarMayor(double m);

int main () {
  double a, b, c, m;

  leerNumeros(a, b, c);
  // Aquí ya tengo llenas mis variables
  m = mayor(a, b, c);
  mostrarMayor(m);

  return EXIT_SUCCESS;
}

void leerNumeros(double &a, double &b, double &c) {
  cout.width(20);
  cout<<"<--- Mayor de 3 números --->"<<endl;
  cout.width(20);
  cout<<"Primer número: ";
  cin>>a;

  cout.width(20);
  cout<<"Segundo número: ";
  cin>>b;

  cout.width(20);
  cout<<"tercer número: ";
  cin>>c;
}

double mayor(double a, double b, double c) {
  if (a > b) b = a;
  if (b > c) c = b;

  return c;
}

void mostrarMayor(double m) {
  cout.width(20);
  cout<<"El mayor valor es: "<<m<<endl;
}
