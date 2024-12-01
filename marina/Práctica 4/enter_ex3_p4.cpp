//
// Created by marin on 22/11/2024.
//

#include <iostream>
#include <string>
using namespace std;

int main() {
    int p;
    string res = "";

    cout << "Introdueix un nombre enter: ";
    cin >> p;

   if (p <= 1) {

       res = "No es primer";  // si es menor o = a 1 no es primo
    } else {
        for (int i = 2; i*i <= p; i++) {
            if (p % i == 0) {
                res = "No es primer";  // Si es divideix exactament per qualsevol nombre, no és primer
                break;
            } else
                res = "Es primer";

        }
    }

    cout << res << endl;

    return 0;
}
