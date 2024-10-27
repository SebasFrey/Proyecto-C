#include <stdio.h> // Incluimos la librería estándar de entrada/salida

int main() // Función principal del programa
{
    int a;    // Declaramos una variable entera 'a'
    float b;  // Declaramos una variable de tipo float 'b'
    char c;   // Declaramos una variable de tipo char 'c'

    // Pedimos al usuario que ingrese valores para las variables 'a', 'b' y 'c'
    printf("Digite el valor de la variable a: \n"); // Solicitamos el valor para 'a'
    scanf("%i", &a);                                // Escaneamos el valor introducido por el usuario para 'a'

    printf("\nDigite el valor de la variable b: \n"); // Solicitamos el valor para 'b'
    scanf("%f", &b);                                  // Escaneamos el valor introducido por el usuario para 'b'

    // Nota: Aquí es necesario un espacio extra antes de escanear 'c', porque 'scanf' con %c
    // puede capturar un carácter de nueva línea anterior, por eso colocamos un espacio antes de %c.
    printf("\nDigite el valor de la variable c: \n"); // Solicitamos el valor para 'c'
    scanf(" %c", &c);                                 // Escaneamos el valor introducido por el usuario para 'c'

    // Mostramos los valores ingresados por el usuario
    printf("\nEl valor de a es: %i\n", a);  // Mostramos el valor de 'a'
    printf("El valor de b es: %.1f\n", b);  // Mostramos el valor de 'b'
    printf("El valor de c es: %c\n", c);    // Mostramos el valor de 'c'

    // Pedimos al usuario que ingrese su nombre
    char x[50];                             // Declaramos un array de caracteres para almacenar el nombre
    printf("\nDigite su nombre: \n");        // Solicitamos el nombre
    scanf("%s", x);                         // Escaneamos el nombre introducido por el usuario

    // Mostramos un mensaje personalizado con el nombre ingresado
    printf("\nMucho gusto, señor %s\n", x);  // Mostramos el nombre del usuario

    return 0; // Finalizamos el programa correctamente
}
