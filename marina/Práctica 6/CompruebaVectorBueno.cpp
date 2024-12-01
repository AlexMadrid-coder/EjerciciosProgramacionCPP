//
// Created by marin on 01/12/2024.
/* Tema4-DiapositivesPresentacio-18) Realitzeu un programa que demane 10 nombres enters i
els guarde en un vector. Després demanarà un altre nombre i dirà si es troba en el vector
(especificant en quina posició es troba) o si no s’hi troba. Per poder comprovar-ho, mostreu el
contingut del vector per pantalla. Recordeu descompondre el programa en mòduls. */

#include <iostream>
#include <windows.h>
using namespace std;
#define TAM 10


// funcion llenar vector
void LlenaVector(int vector[]) {

    for (int i=0 ; i <= TAM-1 ; i++){
        cout << "Introduzca el valor de la posicion numero " << i + 1 << " del vector" << endl;
        cin >> vector[i];
        cout << i;
    }
    cout << "Ha terminado de llenar el vector." << endl;
    // compruebo qué vector tiene

    /*
    cout << "Su vector es: " << endl;
    cout << vector[0] << " , " << vector[1] << " , " << vector[2] << " , " << vector[3] << " , " << vector[4] << " , " << vector[5] << " , " << vector[6] << " , " << vector[7] << " , " << vector[8] << " , " << vector[9] << endl;
    */



}

int main () {
    int num;
    int vector[TAM];

    LlenaVector(vector);

    // compruebo si me devuelve el vector lleno
    cout << "Su vector es: " << endl;
    cout << vector[0] << " , " << vector[1] << " , " << vector[2] << " , " << vector[3] << " , " << vector[4] << " , " << vector[5] << " , " << vector[6] << " , " << vector[7] << " , " << vector[8] << " , " << vector[9] << endl;
    // me desespero


    cout << "Escribe un numero que quieras saber si esta en tu vector" << endl;
    cin >> num;


    for (int i=0 ; i <= TAM-1 ; i++) {

        if (num != vector[i]) {
 //           cout << "no es igual al numerin en la posicion " << i << endl;
        } else {
            cout << "Tu numero si esta en el vector, en la posicion " << i << " (teniendo en cuenta de que la posicion inicial es la 0." << endl;
            break;
        }

        if (i == TAM-1) {
            cout << "Tu numerin no esta en el vector" << endl;
        }
    }




    return 0;
}



/*
 *for (int i=0 ; i <= TAM-1 ; i++) {
        if (num == vector[i]) {
            cout << "Tu numero si esta en el vector, en la posicion " << i << endl;
            break;
        }
        if (i == TAM-1 ){
            cout << "Tu número no está en el vector" << endl;
        }
    }
 */






