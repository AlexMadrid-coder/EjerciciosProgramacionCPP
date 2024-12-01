//
// Created by marina vidal on 01/12/2024.
// Hace la media de 10 enteros de un vector tamaño 10 que rellena el usuario. Tiene dos funcones,la que llena el
// vector y la de la media
//

#include <iostream>
using namespace std;

void LlenaVector (int vector[], int TAM = 10) {

    for (int i=0 ; i <= TAM-1 ; i++){
        cout << "Introduzca el valor de la posicion numero " << i + 1 << " del vector" << endl;
        cin >> vector[i];
    }
}

// al copiar en otro programma, llamar MitjanaElements
int main (){
  int TAM = 10;
  int vector[TAM];
  float mitjana = 0;

  LlenaVector(vector, TAM);

  for (int i=0 ; i <= TAM-1 ; i++){
    mitjana = mitjana + vector[i];
  }

  mitjana = mitjana / TAM;

  cout << "La mitjana es: " << mitjana;

  return 0;
}

