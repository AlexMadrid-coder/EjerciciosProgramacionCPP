// Aquí colocamos todos los imports
#include <iostream>
#include <string>
// Flujo estándar
using namespace std;

// Declaración de tipos y estructuras para el programa

// Cabeceras de funciones 

// Programa principal
int main(void) { // También podemos cambiar void por argv, argv[] para recibir parámetros a la hora de llamar al programa
    cout << "Hello World" << endl;;
    // Dentro ponemos todos los comentarios que queramos para que podamos entender el código a la perfección sin tener que hacer un desarrollo para entenderlo
    return 0;
}

// Declaraciones de funciones


// Tenemos comentarios tanto de línea

/**
    *      Como 
    *          comentarios
    *                      de
    *                          varias
    *                                  líneas
 * 
 */

// Ambos tipos de comentarios son útiles para cada caso y con una extensión adecuada podemos generar comentarios adecuados para poder compartir documentación 
/**
 * @brief 
 * 
 * @param parametro1 
 * @param parametro2 
 * @param parametro3 
 * @param parametro4 
 * @param parametro5 
 * @return int 
 */
// esos comentarios se generar de forma automática y nosotros podemos rellenarlos para la posterior documentación
int funcionDePrueba(int parametro1, float parametro2, string parametro3, unsigned int parametro4, double parametro5) {
    //hace lo que le daa la gana

    return 0;
}