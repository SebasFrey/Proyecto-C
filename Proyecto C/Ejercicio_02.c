#include <stdio.h>

int main()
{
    float c, f;

    printf("Ingrese un valor Celsius a convertir en Fahrenheit: ");
    scanf("%f", &c); // Leer el valor de Celsius

    f = ((9.0 / 5.0) * c) + 32;

    printf("La conversión a Fahrenheit es: %.2f\n", f);

    return 0;
}
