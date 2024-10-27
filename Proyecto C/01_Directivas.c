// Incluir las librerías estándar de C necesarias para las funciones usadas
#include <stdio.h>     // Librería estándar para funciones de entrada y salida como printf
#include <string.h>    // Librería para manejar operaciones con cadenas de texto (strings)
#include <math.h>      // Librería matemática estándar para operaciones como sqrt, pow, etc.
#include <stdlib.h>    // Librería para funciones generales como malloc, exit, atoi
#include <stdbool.h>   // Nueva directiva: permite trabajar con valores booleanos (true/false)
#include <limits.h>    // Nueva directiva: define constantes de los límites de datos (e.g., INT_MAX)
#include <float.h>     // Nueva directiva: define límites para variables flotantes
#include <ctype.h>     // Nueva directiva: contiene funciones para comprobar y convertir caracteres
#include <time.h>      // Nueva directiva: permite trabajar con funciones relacionadas al tiempo

// Definición de una constante mediante la directiva #define
#define PI 3.14        // PI como una constante para cálculos matemáticos
#define MULTIPLICADOR 2 // Nueva directiva: define una constante para usar en cálculos
#define SALUDO "Hola, bienvenido al programa!"  // Nueva directiva: constante tipo cadena

int main(){

    // Ejemplo con la librería stdbool.h
    bool esVerdadero = true;  // Declaración de una variable booleana usando true/false

    // Definición de variables
    int x = 10;
    float suma = 0;

    // Uso de la constante PI definida con #define
    suma = PI + x;

    // Imprimir la suma de PI más x con dos decimales
    printf("La suma es: %.2f\n", suma);  // %.2f para mostrar solo dos decimales

    // Ejemplo de uso de ctype.h
    char letra = 'a';
    if (isalpha(letra)) {  // Comprueba si el carácter es una letra alfabética
        printf("El carácter '%c' es una letra.\n", letra);
    }

    // Ejemplo de uso de limits.h y float.h
    printf("El valor máximo para un entero es: %d\n", INT_MAX);  // Valor máximo para un entero
    printf("El valor máximo para un float es: %e\n", FLT_MAX);   // Valor máximo para un float

    // Ejemplo usando la constante MULTIPLICADOR
    int resultado = x * MULTIPLICADOR;  // Multiplica x por la constante
    printf("El resultado de multiplicar %d por %d es: %d\n", x, MULTIPLICADOR, resultado);

    // Ejemplo con la librería time.h
    time_t ahora;
    time(&ahora);  // Obtener la hora actual
    printf("Fecha y hora actuales: %s", ctime(&ahora));  // Imprime la hora y fecha actual

    // Usar la constante SALUDO
    printf("%s\n", SALUDO);  // Imprime el saludo definido

    return 0;
}
