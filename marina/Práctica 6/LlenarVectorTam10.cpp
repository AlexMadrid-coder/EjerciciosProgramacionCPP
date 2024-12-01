//
// Created by marina vidal on 01/12/2024.
// Llena un vector de tamaño TAM, en este caso va a ser de 10 posiciones pero se puede variar cambiando TAM
//

#include <iostream>
using namespace std;

// Al usar en otro main llamarle LlenaVector
int main (void) {
  int i, TAM;
  TAM = 10;
  int vector[TAM];

  for (i=0 ; i <= TAM-1 ; i++){
    cout << "Introduzca el valor de la posicion numero " << i + 1 << " del vector" << endl;
    cin >> vector[i];
  }

  cout << "Ha terminado de llenar el vector." << endl;

  // comporobación a continuación

  cout << "Su vector es: " << endl;
  cout << vector[0] << " , " << vector[1] << " , " << vector[2] << " , " << vector[3] << " , " << vector[4] << " , " << vector[5] << " , " << vector[6] << " , " << vector[7] << " , " << vector[8] << " , " << vector[9] << endl;

  return 0;
}

/*
 *SUBPROGRAMA
 *
  int LlenaVector (void) {
  int i, TAM;
  TAM = 10;
  int vector[TAM];

  for (i=0 ; i <= TAM-1 ; i++){
    cout << "Introduzca el valor de la posicion numero " << i + 1 << " del vector" << endl;
    cin >> vector[i];
  }

  cout << "Ha terminado de llenar el vector." << endl;

  // comporobación a continuación

  cout << "Su vector es: " << endl;
  cout << vector[0] << " , " << vector[1] << " , " << vector[2] << " , " << vector[3] << " , " << vector[4] << " , " << vector[5] << " , " << vector[6] << " , " << vector[7] << " , " << vector[8] << " , " << vector[9] << endl;

  return 0;
}

 */