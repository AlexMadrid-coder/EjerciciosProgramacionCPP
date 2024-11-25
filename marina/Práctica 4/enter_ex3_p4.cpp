//
// Created by marin on 22/11/2024.
//

#include <iostream>
using namespace std;

int main() {
    int p, i;

    cout << "Introdueix un nombre enter: ";
    cin >> p;

   if (p <= 1) {
        cout << "No és primer" << endl;  // si es menor o = a 1 no es primo
    } else {
        for (int i = 2; i*i <= p; i++) {
            if (p % i == 0) {
                cout << "No és primer" << endl;  // Si es divideix exactament per qualsevol nombre, no és primer
                break;
            } else
              cout << "és primer." << endl;
        }
    }

    return 0;
}
