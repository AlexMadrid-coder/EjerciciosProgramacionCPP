/*
Created by marina vidal
*/

#include <iostream>
#include <stdlib.h>

using namespace std;


//pide caracter
void demana_caracter(char & lletra) // faltava el ampersand per que el valor pasara per referencia i no per valor
{
 do
 {
 cout << "Introdueix una lletra minúscula\n";
 cin >> lletra;
 }
 while  ((int(lletra) < int('a')) ||  (int(lletra) > int('z')) ) ;
}


//main
int main(void)
{
 char meua_lletra = '?';
 demana_caracter (meua_lletra);
 cout << "La lletra llegida és " << meua_lletra << endl;

 return 0;
}
