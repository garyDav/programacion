#include <iostream>
#include <unistd.h>
#include <thread>
using namespace std;

bool esPrimo(int numero);

int main () {
  // Instancia y asignación de variables
  short int v_goku = 100, v_vegeta = 100; // vidas
  unsigned a_goku = 10, a_vegeta = 10; // daño de ataque
  unsigned ronda = 1; // Número de rondas
  bool b_combate = true; // Bandera del combate

  // Título del programa
  cout<<"*************** Goku vs Vegeta ***************"<<endl;

  // Combate
  while (true) {
    if ( v_goku < 1 || v_vegeta < 1 )
      break;

    // Tabla de resultados: Rondas
    cout<<"Ronda: "<<ronda<<endl;

    // Si el combate es true, ataca goku
    if (b_combate) {
      v_vegeta -= a_goku;
      b_combate = false;
      cout<<"Ataque de Goku: "<<a_goku<<endl;
    } else { // ataca vegeta
      v_goku -= a_vegeta;
      b_combate = true;
      cout<<"Ataque de Vegeta: "<<a_vegeta<<endl;
    }

    // Vidas
    cout<<"Vida de Goku: "<<v_goku<<" - Vida de Vegeta: "<<v_vegeta<<endl;

    if (v_vegeta < 30)
      cout<<"Vegeta: Maldito insecto!!!"<<endl;

    ronda++;
    // Espíritu guerrero de Goku
    if ( esPrimo(ronda) ) {
      a_goku += 5;
      continue;
    }

    sleep(1);
    cout<<endl;
  }

  return EXIT_SUCCESS;
}

bool esPrimo(int numero) {
  // Casos especiales
  if (numero == 0 || numero == 1 || numero == 4)
    return false;

  for (int x = 2; x < numero / 2; x++) {
    if (numero % x == 0) {
      return false;
    }
  }

  return true;
}
