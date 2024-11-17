//
// Created by marin on 17/11/2024.
//
// Escriu un programa que calcule l'àrea total o parcial (àrea del sector circular) d'un cercle:
// Area = (πr²/360)α , on r és el radi del cercle i α és l'angle del sector
//

#include <iostream>
using namespace std;

int main (void) {
  float r, a;
  cout << "Introduzca el radio de su circulo o su secor circular" << endl;
  cin >> r;
  cout << endl;
  cout << "Introduzca el angulo de su sector circular. En el caso de que sea un circulo, introduzca 360. " << endl;
  cin >> a;
  cout << "El area de la figura es " << ((3.14*r*r)/(360))*a << endl << "unidades cuadradas." << endl;


  return 0;

  }