//
// Created by marina vidal on 17/11/2024.
// Realitza un programa que demane distàncies en quilòmetres i les convertisca en milles (1 milla = 1.609 km)
//

#include <iostream>
using namespace std;

int main(void) {
  float k;
  cout << "Introduzca distancia en kilometros: ";
  cin >> k;
  cout << k << "kilometros son " << (k*0.621504) <<" millas." << endl;
  return 0;
}
