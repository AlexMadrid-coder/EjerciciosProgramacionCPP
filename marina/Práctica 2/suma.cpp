//
// Created by marin on 17/11/2024.
// Escriu un programa per a calcular la suma de tres nombres reals amb dues xifres
// decimals. Mostra el resultat en el format següent:
//  Introdueix 3 nombres reals: 3.14 23.568 100.981
//    003.14
//    023.57
//    100.98
//    ---------
//    127.69
//

#include <iostream>
using namespace std;
int main(void)
{
    float a, b, c, res;

    cout << "Introdueix a, b i c separats per un espai";
    cin >> a >> b >> c;

    res = a + b + c;

    cout.precision(2);
    cout.setf(ios::fixed);
    cout.setf(ios::right);

    //cout.setf(ios::showpoint) // per defecte

    cout.width(8);
    cout.fill('0');
    cout << a << endl;

    cout.width(8);
    cout.fill('0');
    cout << b << endl;

    cout.width(8);
    cout.fill('0');
    cout << c << endl;

    cout << "--------" << endl;
    cout.width(8);
    cout.fill('0');
    cout << res << endl;

    return 0;
}