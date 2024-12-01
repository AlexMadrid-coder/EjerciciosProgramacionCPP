//
// Created by marin on 30/11/2024.
//
#include <iostream>
#include <string>
using namespace std;

struct Coche {
    int puertas;
    int caballos;
    int vMax;
    int marchas;
    string marca;
    string modelo;
    string color;
    string marcaRuedas;
    float precio;
 };

int main (void) {
     int puertas = 5;
     int caballos = 75;
     int vMax = 300;
     int marchas = 6;
     string marca = "toyota";
     string modelo = "yaris";
     string color = "rojo";
     string marcaRuedas = "michelin";
     float precio =  35999.99;


     Coche xsara;
     xsara.caballos = 98;
     xsara.color = "verde";
     xsara.marca = "citroen";
     xsara.modelo = "xsara";

     Coche megane = {3, 75, 157, 5, "renault", "megane", "azul", "michelin", 4500.0};
     Coche matrixCoches[3][3];
     // no se puede hacer cout << megane;

     return 0;
 }

 Coche inicializarCoche() {
   Coche nuevoCoche = {};
   return nuevoCoche;
   }