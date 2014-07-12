/*
 * The C programming language
 * Exercise 1-2
 *
 * Experiment to find out what happens when printf's argument contains \c, where
 * c is some character other than n, t, b, " and \
 */

#include <stdio.h>

int main(void) {
    printf("This should have a visible/audible bell: \a\n");
    printf("Here we have a backslash '\\'\n");
    printf("There shoo\buld be no ee\brrors in thh\bis sentence.\n");
    printf("Question mark \?, single quote \' and double quote \"\n");
    printf("What is a formfeed\f?\n");
    printf("Blah is weird\rThis\n");
    printf("htab\t and now a \vvtab\n");
    printf("Random octal: \43 and hex: \x4c\n");

    return 0;
}
