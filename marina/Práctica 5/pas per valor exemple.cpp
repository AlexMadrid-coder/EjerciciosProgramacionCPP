#include <iostream>
#include <math.h>
using namespace std;


/* Prototips de les funcions */
void ender (float param1, int param2, int p3); // cabecera?


/* Definició */
void ender (float param1, int param2, int p3)
{
    p3 = param1 * param2 - 5;
}

//main
int main (void)
{
    int a = 5, b; //variables enteras
    float h = 9.0; //variable con coma
    b = -1; //esto no se podría haber inicializado en la linea 19?
    ender (2 * sqrt(h), 3 * 7 + a, b); //llama a la función copiando -2 * sqrt(h)- en param1, -3*7+a- en param2 y -b- en param3
    /* si fuera por referencia, b (p3) sería ahora (param1 * param2 - 5), es decir
       [ (2 * sqrt(9.0)) * (3 * 7 + a) - 5 ]     =     (2 * 3) * (3 * 7 + 5) - 5     =     6 * 26 - 5     =     151
     pero como es por valor, b sigue siendo -1
    */


    /* Després de la crida, b continua essent -1 */
    return 0;
}
