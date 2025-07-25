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

double cubo (double num) {
    return num*num*num;
}

int main() {
  // Declarar y Asignar Variables
  // [Tipo Dato] nombreVariable
  // Declaración
  double numero, resultado;

  // Lectura de número
  numero = leerDato();

  // Cálculo del cubo
  resultado = cubo(numero);

  // Mostrar Resultado
  mostrarRes(numero, resultado);
  return 0;
}
