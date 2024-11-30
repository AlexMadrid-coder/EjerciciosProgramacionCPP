/*
Created by marina vidal
 */

#include <iostream>
using namespace std;

int main (void) {

    int ficha1, ficha2;

        for (int ficha1 = 0; ficha1 <= 6; ficha1++){ // desde 0, mientras sea menos o igual a 6, ir supando 1 a la ficha1

            for (int ficha2 = 0; ficha2 <= ficha1; ficha2++){ // mientras el primero sea mayor o igual al segundo
                cout << ficha1 << "-" << ficha2 << " ";
            }
            cout << endl; // salto de fila
        }
        return 0;

}