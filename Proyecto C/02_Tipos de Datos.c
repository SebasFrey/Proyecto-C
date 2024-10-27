#include <stdio.h>

int main()
{
    // Declaración de variables de diferentes tipos
    char a = 'e';           // Variable de tipo carácter
    short b = -15;          // Variable de tipo entero corto (short)
    int c = 1024;           // Variable de tipo entero (int)
    unsigned int d = 128;   // Variable de tipo entero sin signo (unsigned int)
    long e = 123456;        // Variable de tipo entero largo (long)
    float f = 20.23;        // Variable de tipo flotante (float)
    double g = 12345612345; // Variable de tipo doble precisión (double)

    printf("El elemento uno es: %c\n", a);      // Imprime un carácter
    printf("El elemento dos es: %i\n", b);      // Imprime un número entero (short)
    printf("El elemento tres es: %i\n", c);     // Imprime un número entero (int)
    printf("El elemento cuatro es: %u\n", d);   // Imprime un número entero sin signo
    printf("El elemento quinto es: %li\n", e);  // Imprime un número entero largo (long)
    printf("El elemento sexto es: %f\n", f);    // Imprime un número flotante (float)
    printf("El elemento séptimo es: %lf\n", g); // Imprime un número doble (double)

    return 0;
}
