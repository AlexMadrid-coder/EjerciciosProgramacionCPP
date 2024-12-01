//
// Created by marina vidal on 01/12/2024.
// Hace la media de 10 enteros de un vector tamaño 10 que rellena el usuario. Tiene dos funcones,la que llena el
// vector y la de la media
//

#include <iostream>
using namespace std;

int LlenaVector (void) {
    int i, TAM;
    TAM = 10;
    int vector[TAM];

    for (i=0 ; i <= TAM ; i++){
        cout << "Introduzca el valor de la posicion numero" << i + 1 << "del vector" << endl;
        cin >> vector[i];
    }

    return vector[TAM];

}

float MitjanaElements (int vector[]){
    int i, TAM;
    float mitjana;
    mitjana = 0;
    TAM = 10;

    for ( i=0 ; i <= TAM-1 ; i++){
        mitjana = mitjana + vector[i];
    }

    mitjana = mitjana / TAM;

    return mitjana;
}