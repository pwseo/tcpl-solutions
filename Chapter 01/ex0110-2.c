/*
 * The C Programming Language
 * Exercise 1-10
 *
 * Write a program to copy its input to its output, replacing each tab by \t,
 * each backspace by \b, and each backslash by \\. This makes tabs and
 * backspaces visible in an unambiguous way.
 */

#include <stdio.h>

int main(void) {
    int c, done;

    while ((c = getchar()) != EOF) {
        done = 0;

        if (c == '\t') {
            printf("\\t");
            done = 1;
        }
        if (c == '\b') {
            printf("\\b");
            done = 1;
        }
        if (c == '\\') {
            printf("\\\\");
            done = 1;
        }

        if (done == 0)
            putchar(c);
    }

    return 0;
}
