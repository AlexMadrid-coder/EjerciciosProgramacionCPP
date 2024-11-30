/*
Created by marina vidal
Escriviu un programa que calcule, per a un enter N llegit pel teclat, la fórmula següent
sumatori d'i al quadrat des d'1 fins a N
*/

#include <iostream>
using namespace std;

int main(void) {
    int n, i, res;
    res = 0;

    cout << "Escriba un número n para que haga el sumatorio de i al cuadrado desde 1 a n" << endl;
    cin >> n;

    for ( i = 1 ; i <= n ; i++ )
    {
        res = res + i*i;
    }

    cout << "El resultado del sumatorio es " << res << endl;
    return 0;
}