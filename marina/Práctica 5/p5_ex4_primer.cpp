/*
Created by marina vidal
4. [EsPrimer.cpp] Escriviu una funció que retorne si un nombre, que se li passa com a paràmetre,
és primer o no. Empreu-la per fer un programa que, donat un nombre introduït pel teclat, mostre per
pantalla tots els nombres primers inferiors a aquest. (Adaptació a funcions de l’exercici 3 de la
pràctica 4),
*/

#include <iostream>
using namespace std;

// función  que dice si es primo o no
void es_primer (int & p) {

    if (p <= 1) {
        cout << " no es primer" << endl;  // si es menor o = a 1 no es primo
    } else {
        for (int i = 2; i*i <= p; i++) {
            if (p % i == 0) {
                cout << " no es primer" << endl;  // Si es divideix exactament per qualsevol nombre, no és primer
                break;
            } else
                cout << " es primer." << endl;
        }
    }

}

// primos menores a el número introducido
void primers_menors (int & aux, int & p) {

    for (int i = 1; i <= p; i++) {

        cout << "Entra a la funcion el número " << aux << endl;
        es_primer (aux); // es primo o no

        aux = aux - 1; // baja un número a p
        cout << "Ahora aux es " << aux << endl;


    }
}

// main (pide entero y lo manda a es_primer)
int main() {
    int p;

    cout << "Introdueix un nombre enter: ";
    cin >> p;
    int aux = p;

    primers_menors (aux, p);

    return 0;
}
