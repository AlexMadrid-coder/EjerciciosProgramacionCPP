/*
Created by marina vidal
Escriviu un programa que demane a l’usuari dos nombres enters (x i y) i mostre per pantalla
el càlcul de la potència xy
(Nota: no es pot fer servir la funció pow de la llibreria matemàtica).
*/


#include <iostream>
using namespace std;

int main (void) {
  int x, y; // estas son las variables de la potencia
  int i = 0, res = 1; // contador y auxiliar de resultado

  cout << "Escribe un número x que sea la base de nuestra potencia" << endl;
  cin >> x; // base de la potencia

  cout << "Escribe un número y que sea el exponente de nuestra potencia" << endl;
  cin >> y; // exponente de la potencia

  while (i < y) {
    res = res * x;
    i = i + 1; // o  lo que es lo mismo, i++;
    }

   cout << "x elevado a y es " << res << endl;


   return 0;

  }