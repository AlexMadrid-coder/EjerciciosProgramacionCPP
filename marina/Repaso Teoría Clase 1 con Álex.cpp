Repaso Teoría Clase 1 con Álex

/* Voy a ir escribiendo de lo que me acuerde a ver qué tal me he enterado */

/* con la barrita y el asterisco se hace un comentaario normal */

/**
 * con la barrita y dos astericos se pone el comentario chulo, en el que si hubiera declarado algo saldría
 */


para empezar se ponen las cosas importadas de fuera que quieras usar en tu programa con un hashtag include y entre picos

#include <iostream>

luego, para la función principal (MAIN) lo que trae el programa de los huevos en el estándard, que por eso se llama std 

entonces, como usas el main estandard pues pones que usas el estadard

using namespace std;

y pones la cabecera de la fución principal

int main(void) {

}

que es int, el tipo de dato que te va a dar, main, que es el nombre de la función y void, que no se pq se pone eso.


-------------------------------------------------------------------------------------------------------------


/* tipos de variables o datos y usos*/

Tipo carácter
char es carácter, 1 byte (-128, 127)

Tipo cadena, una secuencia de caracteres
string (tantos bytes como n de caract)

Tipo enteros
int es entero (-32.768, 32.767) = short o el int tb puede ser  (-2.147.483.648, 2.147.483.647)
tb existe short, long, long long ...

Puedes modificarlo con un modificadot, el unsigned 
no hace falta tener muchas luces para ver que será el mismo rango pero sin los valores menos a cero .
unsigned char es (0, 255)
unsigned short ess (0, 65.353)
unsigned long  4 bytes (0, 4.294.967.295)
unsigned long long 8 bytes (0, 18.446.744.073.709.551.615)

Tipo real: Números reales con coma flotante 
float (simple precisió) 7 xifres
double (double precisió) 15 xifres
long double (double precisió) 18 xifres

Sin valor
void (yo tp entiendo muy bien pero oye, así es)

-----------------------------------------------------------------------------------------------------------------

// cositas de estilo, como los endl o los tabulados

tenemos un main del que salen cosas y una variable numérica


int main(void)
{
int num;

cin >> num;

cout << "Tu número es desconocido";
cout << endl;

cout << "EL número" << num << "es tu número";
cout << endl;

cout << "Tienes un número \n que has elegido";
cout << endl;

cout << "Tu número \t se ha guardado correctamente";
cout << endl;

cout << "Tu número" << endl << "está siendo procesado" << endl;
}

Esto haría...
Tu número es desconocido
El número num es tu número
Tienes un número
que has elegido
Tu número   se ha guardado correctamente
Tu número
está siendo procesado

----------------------------------------------------------------------------------------------------------------------------------

Operadores normales
(=) para asignar un valor a una variable
suma (+)
resta (-) que también se usa para cambiar el signo de algo
producto (*)
potencia (**)
división (/)
mòdul (%) [o es \ ??? ] devuelve el resto de la división entera entre dos valores EN ENTEROS

decrement (--): resta uno a la variable sobre la que se aplica (variables enteros i carécter).
increment (++): suma uno a la variable sobre la que se aplica (variables enteros i carécter).

/*  Decirle a alex esto:
    Els operadors increment (++) i decrement (--) poden precedir o anar darrere de la variable però
    produiran resultats diferents. Quan s'aplica dins d'una expressió precedint la variable, aquesta
    s'incrementa/decrementa abans d'avaluar l'expressió. Si s'aplica després, primer s'avalua l'expressió
    amb el valor actual de la variable i, en acabant, s'incrementa/decrementa el valor de la variable.
    .
    Exemples:
    y = 10;                                |   y = 10;
    x = y++;  ->  x val 10 i y val 11      |   x = ++y;  ->    x i y valen 11                                
*/ 


Operaciones compuestos
(+=) -> (a += b) -> a = a + b
(/=) -> (a /= b) -> a = a / b
(-=) -> (a -= b) -> a = a - b
(%=) -> (a %= b) -> a = a % b
(*=) -> (a *= b) -> a = a * b

---------------------------------------------------------------------------------------------------------------------------------

/* estructuras de condición, ns cómo se llaman */

hay dos principales 

IF 

if ()