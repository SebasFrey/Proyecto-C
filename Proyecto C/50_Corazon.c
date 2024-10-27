#include <stdio.h>
#include <stdlib.h> // Include stdlib.h for system()

int main() {
    float x, y, a;

    // Change terminal color once at the beginning
    system("color 0c");

    // Loop over y from 1.5 to -1.5
    for (y = 1.5; y > -1.5; y -= 0.1) {
        // Loop over x from -1.5 to 1.5
        for (x = -1.5; x < 1.5; x += 0.05) {
            a = x * x + y * y - 1; // Equation for a circle

            // Determine whether to print '*' or ' ' based on the condition
            putchar((a * a * a - x * x * y * y * y <= 0.0) ? '*' : ' ');
        }
        putchar('\n'); // New line after each row
    }
    printf("Te amo");

    return 0;
}
