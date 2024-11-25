/*
Created by marina vidal

*/


#include <iostream>
using namespace std;

int main(void)
{
    int n,i;
    n = 1;

    cout << "Dona'm un nombre n positiu perquè faça la seua taula de multiplicar. Prem 0 per parar.\n";
    cin >> n;

    while (n != 0){
        for (i = 1;i<=10;i++) {
            cout << i << " x " << n << " = " << i*n << endl;
        }
        cin >> n;
    }

    system("pause");
    return 0;
}