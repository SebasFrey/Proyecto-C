#include <stdio.h>

int main (){

    int a, b, c;
    a = 23;
    b = 10;  // Asignación de valor a 'b'
    c = 5;   // Asignación de valor a 'c'

    a += 20;  // a = a + 20
    a -= 20;  // a = a - 20
    a *= 2;   // a = a * 2
    a /= 2;   // a = a / 2

    printf("El valor de a es: %i\n", a);
    printf("El valor de b es: %i\n", b);
    printf("El valor de c es: %i\n", c);

    return 0;
}
