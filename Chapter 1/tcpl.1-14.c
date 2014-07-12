#include <stdio.h>

#define ASCIIMAX    127

int main(void) {
    int c, i, j, maxlen;
    int ascii[ASCIIMAX];

    for (i = 0; i < ASCIIMAX; ++i)
        ascii[i] = 0;

    maxlen = 0;

    while ((c = getchar()) != EOF)
        if (c > 32 && c < 127)
            if (++ascii[c] > maxlen)
                maxlen = ascii[c];

    for (i = maxlen; i > 0; --i) {
        printf("%3d | ", i);
        for (j = 33; j < ASCIIMAX; j++)
            if (ascii[j] >= i)
                putchar(j);
            else
                putchar(' ');
        putchar('\n');
    }


    return 0;
}
