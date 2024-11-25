//
// Created by marin on 17/11/2024.
/*[LletresXifres.cpp] Escriu un programa que llija 5 parells de valors formats per un caràcter i un
nombre real separats per una coma (per exemple: A,65.4) i els mostre per pantalla segons la següent
organització:*/


#include <iostream>
using namespace std;
int main(void){

    char l1,l2,l3,l4,l5;
    double n1,n2,n3,n4,n5;

    cout << "Introduïsca  cinc parells de valors formats per una lletra i un nombre real separats per una coma (per exemple: A, 65.4)";

    cin.get(l1);
    cin.ignore(1);
    cin >> n1;

    cin.ignore(1);

    cin.get(l2);
    cin.ignore(1);
    cin >> n2;

    cin.ignore(1);

    cin.get(l3);
    cin.ignore(1);
    cin >> n3;

    cin.ignore(1);

    cin.get(l4);
    cin.ignore(1);
    cin >> n4;

    cin.ignore(1);

    cin.get(l5);
    cin.ignore(1);
    cin >> n5;

    cin.ignore(1);

    // capçalera
    cout << "Lletres -" << "- Nombres \n" ;

    // primer parell

    /*cout.setf(ios::left);
    cout.width(11);
    cout.fill(' ');*/
    cout << l1 << "	   ";


    cout.setf(ios::right);
    cout.fill('#');
    cout.width(7);
    cout << n1 << "\n";

    //segon parell

    cout.setf(ios::left);

    cout << l2 << "	   ";

    cout.setf(ios::right);
    cout.fill('#');
    cout.width(7);
    cout << n2 << "\n";

    //tercer parell

    cout.setf(ios::left);

    cout << l3 << "	   ";

    cout.setf(ios::right);
    cout.fill('#');
    cout.width(7);
    cout << n3 << "\n";

    //quart parell

    cout.setf(ios::left);

    cout << l4 << "	   ";

    cout.setf(ios::right);
    cout.fill('#');
    cout.width(7);
    cout << n4 << "\n";

    //cinqué parell

    cout.setf(ios::left);

    cout << l5 << "	   ";

    cout.setf(ios::right);
    cout.fill('#');
    cout.width(7);
    cout << n5 << "\n";

    return 0;
}