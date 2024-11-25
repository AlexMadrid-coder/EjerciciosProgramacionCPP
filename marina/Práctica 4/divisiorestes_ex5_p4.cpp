/*
Created by marina vidal
Escriviu un programa que, donats el dividend i el divisor (ambdós naturals positius), calcule
el quocient i la resta de la divisió entera mitjançant restes successives(açò és, sense utilitzar
el operador de divisió ni l’operador mòdul oresidu)
*/

#include <iostream>
using namespace std;

int main (void) {
    int resto = 0, pequeño, grande, contador; // variables

    cout << "escriba el dividendo de su división" << endl; // dividendo
    cin >> grande;
    cout << "escriba el divisor de su división" << endl; // divisor
    cin >> pequeño;



    for (contador=0; grande>=pequeño; contador++){
        grande = grande - pequeño;
    }

    cout << "el cociente de la división és" << contador << endl;
    cout << "el resto de la división es" << grande << endl;

    return 0;
}