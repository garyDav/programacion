#include <iostream>
using namespace std;

// double: 1.5, 87.4334
double leerDato() {
  double num;
  cout<<"Escriba un número: ";
  cin>>num;
  return num;
}

void mostrarRes(double num, double res) {
  cout<<"El cubo de "<<num<<" es: "<<res<<endl;
}

int main() {
  // Declarar y Asignar Variables
  // [Tipo Dato] nombreVariable
  // Declaración
  double numero;

  // Lectura de número
  numero = leerDato();

  // Cálculo del cubo

  // Mostrar Resultado
  mostrarRes(numero, 20);
  return 0;
}
