#include <iostream>
using namespace std;
int main(void)
{
  short c1 = 20;
  short c2 = 5000;
  int c3;

  c3 = c1 * c2;
  cout << c1 << " x " << c2 << " = " << c3 << endl;

  return 0;
}
/*
La solución era cambiar las comillas pq se copian mal. Además de cambiar 
short en c3 por un entero ya que la salida da -31072 
*/