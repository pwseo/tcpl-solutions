/*
 * The C Programming Language
 * Exercise 1-8
 *
 * Write a program to count blanks, tabs, and newlines.
 */

#include <stdio.h>

int main(void) {
    int s, t, n;
    int c;

    s = 0;  /* spaces (blanks)  */
    t = 0;  /* tabs             */
    n = 0;  /* newlines         */

    while ((c = getchar()) != EOF) {
        if (c == ' ')
            ++s;
        if (c == '\n')
            ++n;
        if (c == '\t')
            ++t;
    }
    
    printf("%d spaces, %d tabs and %d newlines.\n", s, t, n);

    return 0;
}
