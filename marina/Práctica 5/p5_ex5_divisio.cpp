/*
Created by marina vidal

5. [Divisio.cpp] Escriviu una funció que, donats dos enters positius x i y, calcule la divisió entera i
el residu de la divisió fent servir només l’operador de subtracció. (Adaptació a funcions de
l’exercici 5 de la pràctica 4).

/************************************************************

    Funció: dos enters positius x i y, calcula la divisió entera i el residu de la divisió fent servir només
    l’operador de subtracció.

    Descripció: Calcula el la divisió d'un nombre

    Paràmetres: int & grande, int & pequeño, contador, resto

    Nom I/O Descripció: El programa pide dos números, dividendo y divisor. La variable resto, inicializada a cero,
    igual que el contador. El pequeño va restando al mayor, cada vez que resta, el contador usbe uno. Cuando el pequeño
    es igual o menor que el grande, se para. El resto de la ultima resta es el resto de la división y el contador será
    el cociente, es decir, cuántas veces se ha podido restar un número al otro.

    Valor de retorn: 0

************************************************************/



#include <iostream>
using namespace std;

// divisió per restes
int divisio_restes (int & grande, int & pequeño) {
    int resto = 0, contador; // variables


    for (contador=0; grande>=pequeño; contador++){
        grande = grande - pequeño;
    }

    cout << "el cociente de la division es" << contador << endl;
    cout << "el resto de la division es" << grande << endl;

    return 0;
}


    // main
    int main (void) {
        int resto = 0, pequeño, grande, contador; // variables

        cout << "escriba el dividendo de su division" << endl; // dividendo
        cin >> grande;
        cout << "escriba el divisor de su division" << endl; // divisor
        cin >> pequeño;

        divisio_restes (grande, pequeño); // función

        return 0;
    }



