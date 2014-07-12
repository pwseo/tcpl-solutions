/*
 * The C Programming Language
 * Exercise 1-9
 *
 * Write a program to copy its input to its output, replacing each string of one
 * or more blanks by a single blank.
 */

#include <stdio.h>

int main(void) {
    int c, lc;  /* lc stands for "last character" */

    lc = 0;

    while ((c = getchar()) != EOF) {
        /* branch for every character other than blanks */
        if (c != ' ')
            putchar(c);
        /* branch for blanks only */
        if (c == ' ')
            if (lc != ' ')
                putchar(c); /* if last character was not ' ', print ' ' */
        lc = c;
    }

    return 0;
}
