//
// Created by marina vidal on 17/11/2024.
//

#include <iostream>
using namespace std;

int main(void) {

  float num1, num2;

  cout << "Ingrese el primer numero: " << endl;
  cin >> num1;
  cout << "Ingrese el segundo numero: " << endl;
  cin >> num2;

  if (num1 < num2) {
    cout << num1 << "<" << num2 << endl;
    } else if (num1 > num2) {
      cout << num2 << "<" << num1 << endl;
      } else {
        cout << "no hay un número que sea más grande que el otro" << endl;
      }

      return 0;

}