// cambio kilometro -> milla

#include <iostream>
#include "math.h"


using namespace std;

#define MILLA 1.609;

int main(void) {
    int kilometros;

    cout << "Dame los kilometros: "; 
    cin >> kilometros;

    float millas = kilometros * MILLA;

    cout << "Tus kilometros en millas son: " << millas << " millas\n";


    return 0;
}