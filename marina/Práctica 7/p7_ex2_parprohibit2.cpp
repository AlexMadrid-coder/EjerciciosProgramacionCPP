//
// Created by marina vidal sevilla on 29/11/2024.
//
/*
2. (Par_prohib.cpp) Realitzeu un programa que cerque totes les ocurrències d’una paraula
prohibida introduïda per l’usuari en una frase i les reemplace per la cadena “XXX”.
*/


#include <iostream>
#include <string>
#include <vector>
using namespace std;


int BuscarSubstituir(string & frase, string parprohibit) {

    int posicio = 0; // Inicialitzem el comptador i la posició

     posicio = frase.find(parprohibit, posicio);
    // un frase.find devuelve la posicion donde hay algo, es decir, un entero

    frase.replace(posicio, parprohibit.length(), "XXX");
    // el primer termino de un frase.replace
    // es la primera posición desde la que sustituye, el segundo es cuántos caracteres sustituye, y el tercero es
    // por qué cosa lo sustituye

    posicio = posicio + parprohibit.length(); // Avancem la posició després de la substitució

    return 0;
}


int main (void) {

    string frase, parprohibit;
    cout << "Escriu la teua frase on vulgues censurar una paraula: " << endl;
    getline(cin, frase); //Llig fins a trobar el final de línia
    cout << "Escriu la paraula a censurar: " << endl;
    cin >> parprohibit;

    BuscarSubstituir (frase, parprohibit);
    cout << "La frase censurada es: " << frase << endl;


    return 0;

}
