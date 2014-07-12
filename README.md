# TCPL2 Exercise Solutions

This repository will contain solutions for all the exercises found on the book "The C Programming Language, 2nd ed" by Kernighan and Ritchie (or at least, I sure hope it will).


## What to expect from the solutions?

Solutions will use only those features of C that have been covered in the book by the point at which the exercise appears.


## Some remarks regarding C89

Since the book itself was written when the ANSI C standard was the C89 standard, all the code was written to comply with it.
Specifically, all declarations of `main` return an `int` and take no arguments (where appropriate). Also, `main` *always* returns an `int` explicitly (usually `0`):

    int main(void) {
        ...
        return 0;
    }

To ensure compliance with the C89 standard, all the code has been compiled with:

    gcc -std=c89 -pedantic -Wall -Wextra ...
