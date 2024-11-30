/*
Created by marina vidal
*/

#include <iostream>

using namespace std;

void es_parell(int valor_llegit) {
  if ((valor_llegit % 2) == 0) {
    cout << "El valor" << valor_llegit << " és parell\n" ;
  } else {
        cout << "El valor " <<valor_llegit<< "és imparell\n";
    }
}

int main(void) {
  int valor_llegit ;
  cout << "Introdueix un valor";
  cin >> valor_llegit ;
  es_parell(valor_llegit);

  return 0;
}
