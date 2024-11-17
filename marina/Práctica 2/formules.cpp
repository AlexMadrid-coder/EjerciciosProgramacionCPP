//
// Created by marina on 17/11/2024.
//
/* Escriu un programa que demane tres nombres pel teclat: a, b, c i d. Calcula les
 següents fórmules matemàtiques amb aquests valors i mostra els resultats per pantalla:
 b²−4ac, a(b+d), 1/a²+a+3, a+b/c+d
 */


#include <iostream>
using namespace std;
    int main() {
      float a, b, c , d;
      cout << "Introduzca el valor de a: ";
      cin >> a;
      cout << "Introduzca el valor de b: ";
      cin >> b;
      cout << "Introduzca el valor de c: ";
      cin >> c;
      cout << "Introduzca el valor de d: ";
      cin >> d;

      cout << "El resultado de la primera operacion es" << endl << (b*b - 4*a*c) << endl;
      cout << "El resultado de la segunda operacion es" << endl << (a * (b+d)) << endl;
      cout << "El resultado de la tercera operacion es" << endl << (1/(a*a+a+3)) << endl;
      cout << "El resultado de la cuarta operacion es" << endl << ((a+b)/(c+d)) << endl;

      return 0;

      }