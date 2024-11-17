//
// Created by Alejandro on 11/17/2024.
//
//
/*Area= π r²
360 α , on r és el radi del cercle i α és l'angle del secto
*/
#include <iostream>

#define PI 3.14159265

using namespace std;

int main(void) {
  float radio = 0.0;
  float angulo = 0.0;
  cout << "Dame el radio" << endl;
  cin >> radio;
  cout << "Dame el angulo" << endl;
  cin >> angulo;
  float area = angulo * (PI * (radio*radio)) / 360;
  cout << "El area es: " << area << endl;

  return 0;

}