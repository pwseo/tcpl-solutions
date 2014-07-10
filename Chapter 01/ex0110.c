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
    int c;

    while ((c = getchar()) != EOF) {
        /* No boolean ANDing for now... */
        if (c != '\t')
            if (c != '\b')
                if (c != '\\')
                    putchar(c);

	/* No else if either! */
        if (c == '\t')
            printf("\\t");
        if (c == '\b')
            printf("\\b");
        if (c == '\\')
            printf("\\\\");
    }

    return 0;
}
