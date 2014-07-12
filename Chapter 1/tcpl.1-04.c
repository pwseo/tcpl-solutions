/*
 * The C programming language
 * Exercise 1-4
 *
 * Write a program to print the corresponding Celsius to Fahrenheit table.
 */

#include <stdio.h>

int main(void) {
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;      
    upper = 300;    
    step = 20;      

    printf("Celsius\tFahrenheit\n");
    celsius = lower;
    while (celsius <= upper) {
        fahr = (9.0 / 5.0) * (celsius + 32.0);  /* ºF = 5/9 × (ºC + 32) */
        printf("%7.1f\t%3.0f\n", celsius, fahr);
        celsius = celsius + step;
    }

    return 0;
}
