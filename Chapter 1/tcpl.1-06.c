/*
 * The C Programming Language
 * Exercise 1-6
 *
 * Verify that the expression `getchar() != EOF` is 0 or 1.
 */

#include <stdio.h>

int main(void) {
    printf("Press <Enter> or <C-D>: ");
    printf("(getchar != EOF) is %d\n", getchar() != EOF);

    return 0;
}
