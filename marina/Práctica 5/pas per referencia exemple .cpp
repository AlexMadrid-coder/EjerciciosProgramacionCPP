#include <iostream>
using namespace std;


/* Prototips de les funcions */
void intercanvi (float & x, float & y);


/* Definició */
void intercanvi (float & x, float & y) //dos parámetros, x y, que van a ser pasadas por referencia
{
    float t; //variable nueva de la funcion t
    //diremos t, x=1, y=2 (t, 1, 2)
    t = x; // t pasa a llevar el valor de x
    // (1, 1, 2)
    x = y; // x pasa a llevar el valor de y
    // (1, 2, 2)
    y = t; // y pasa a llevar el valor de t
    // (1, 2, 1)
    // ahora x tiene el valor que tenía y y viceversa
}


//main
int main (void)
{
    float h, j;
    cout << "Introdueix dos nombres: " << endl;
    cin >> h >> j;
    cout << "La primera variable val " << h << " i la segona " << j << endl;
    intercanvi(h, j); // DEVUELVE los valores que ha MODIFICADO la función
    cout << "Ara la primera variable val " << h << " i la segona " << j << endl;
    return 0;
}
