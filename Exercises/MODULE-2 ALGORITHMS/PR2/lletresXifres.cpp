//
// Created by Alejandro on 11/17/2024.
//
#include <iostream>

using namespace std;

int main() {
  char letras[5];
  string numeros[5];
  string temp;
  cout << "Ingresame 5 conjuntos de letra+datos (ej: A,65.4)" << endl;
  for (unsigned i = 0; i < 5; i++) { // Bucle para recibir los 5 datos y separarlos
    cin >> temp;
    letras[i] = temp[0]; // Por como está definido el ejemplo el primer caracter [0] es la letra
    numeros[i] = temp.substr(2, temp.length() - 1); // El resto que sacamos desde posición 2 hasta la final (teniendo en cuenta que comenzamos desde la 2 ya q 1 es coma) es el número
  }
  // Una vez hemos sacado las cosas solo tenemos que mostrarlas con el formato adecuado
  cout << "Lletra\t" << "Xifra\n";
  for (unsigned i = 0; i < 5; i++) {
  cout << letras[i] << "\t" << numeros[i] << endl;
  }
}