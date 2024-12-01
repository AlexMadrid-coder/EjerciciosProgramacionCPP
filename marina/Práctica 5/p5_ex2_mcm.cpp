/*
Created by marina vidal
[MCM.cpp] (Tema2-ExercicisFuncions-10) Realitzeu un programa que calcule el mínim
comú múltiple de dos nombres introduïts pel teclat. Useu la funció mcd implementada segons
l’algorisme d’Euclides ja que cal recordar que:

*/

#include <iostream>
using namespace std;

//  función por valor que calcula el mcd
int funcion_mcm (int a, int b) {
  while (a != b) {
    if ( a > b ) {
      a = a - b;
    } else {
      b = b - a;
      }
  }
  return a;
}

//procedimiento que lee un número y lo pasa por referencia si es positivo o 0
void procedimiento_leer (int & x) {
  do {
    cout << "Dame un numero: ";
    cin >> x;
  } while (x <= 0);
}


// main
int main (void) {
  int a, b, n, i;

  cout << "Dame un número de números" << endl;
  cin >> n;

  if (n >= 2) {
    procedimiento_leer(a);
    i = 2;
    do {
      procedimiento_leer (b);
      a = funcion_mcm (a, b);
      i = i + 1;
    } while (i <= n);

    cout << a << endl;

  } else {
    cout << "números insuficientes" << endl;

  }

}