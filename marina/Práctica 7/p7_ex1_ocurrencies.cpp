//
// Created by marina vidal sevilla on 29/11/2024.
//

/*
    * 1. (Ocurrències.cpp) Escriviu un programa en C/C++ que, donada una cadena de caràcters,
    * permeta substituir les ocurrències d’una altra subcadena. Exemple:
    * Cadena: Aquest problema és més interessant que el problema anterior.
    * Vella Subcadena: problema
    * Nova Subcadena: programa
    * Resultat: Aquest programa és més interessant que el programa anterior.
    * Feu una funció que, donada una cadena de caràcters i una paraula, substituirà cada aparició de la
    * darrera per una nova cadena que també rebrà com a paràmetre. La funció també tornarà el nombre
    * d’aparicions de ‘vella cadena’ en la frase. Un prototip adient podria ser:
    * int BuscarSubstituir(string &frase, string vellacadena, string novacadena);
*/

#include <iostream>
#include <string>

using namespace std;

// Funció que substitueix ocurrències i retorna el nombre de substitucions

int BuscarSubstituir(string & frase, string vellasubcadena, string novasubcadena) {
    cout << "hola" << endl;

    int posicio = 0, aparicions = 0; // Inicialitzem el comptador i la posició

//poner un while q funcione mientras la posición sea menor a la longitud de la frase

    posicio = frase.find(vellasubcadena, posicio);
        // un frase.find devuelve la posicion donde hay algo, es decir, un entero

    frase.replace(posicio, vellasubcadena.length(), novasubcadena);

        // el primer termino de un frase.replace
        // es la primera posición desde la que sustituye, el segundo es cuántos caracteres sustituye, y el tercero es
        // por qué cosa lo sustituye

    posicio = posicio + novasubcadena.length(); // Avancem la posició després de la substitució

    aparicions++; // Augmentem el comptador

    return aparicions; // Retornem el nombre de substitucions

}


int main (void) {

  string frase, vellasubcadena, novasubcadena;
  cout << "Escriu la teua frase on vulgues canviar una paraula: " << endl;
  getline(cin, frase); //Llig fins a trobar el final de línia
  cout << "Escriu la paraula a canviar: " << endl;
  cin >> vellasubcadena;
  cout << "Escriu la paraura per la qual vols sustituir l'anterior paraula: " << endl;
  cin >> novasubcadena;

  BuscarSubstituir (frase, vellasubcadena, novasubcadena);
    cout << "La frase corregida es: " << frase << endl;

  return 0;

}

