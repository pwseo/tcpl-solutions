/*
 * The C Programming Language
 * Exercise 1-15
 *
 * Rewrite the temperature conversion program of Section 1.2 to use a function
 * for conversion.
 */

#include <stdio.h>

#define LOWER   0
#define UPPER   300
#define STEP    20

float ftoc(float f) {
    return (5.0/9.0) * (f-32.0);
}

int main(void) {
    int i;

    for (i = LOWER; i < UPPER; i = i + STEP)
        printf("%3d\t%6.1f\n", i, ftoc(i));

    return 0;
}
