// Programa que intercambia las variables introducidas por el teclado

#include <iostream>

using namespace std;

int main(void) {

    // Introducimos las variables
    int var1, var2, varAux;
    cout << "Dame la primera variable:";
    cin >> var1;
    cout << "Dame la segunda variables:" ;
    cin >> var2;
    // Ahora hacemos el cambio de variables usando la auxiliar
    varAux = var1;
    var1 = var2;
    var2 = varAux;
    // Ahora mostramos las variables cambiadas
    cout << "El valor de tu primera variable cambiada es: " << var1 << endl;
    cout << "El valor de tu segunda variable cambiada es: " << var2 << endl;

    return 0;
}