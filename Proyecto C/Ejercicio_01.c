#include <stdio.h>

int main()
{

    int num1, num2, suma = 0, resta = 0, multiplicacion = 0, division = 0;

    printf("Digite 2 Numeros: ");
    scanf("%i %i", &num1, &num2);

    suma = num1 + num2;
    resta = num1 - num2;
    multiplicacion = num1 * num2;
    division = num1 / num2;  // Esto puede dar error si num2 es 0

    printf("La Suma Es: %i\n", suma);
    printf("La Resta Es: %i\n", resta);
    printf("La Multiplicacion Es: %i\n", multiplicacion);
    printf("La Division Es: %i\n", division);

    return 0;
}
