#include <stdio.h>

#define IN      1
#define OUT     0
#define MAXLEN  10

/* Horizontal histogram */
int main(void) {
    int c, i, j, len, state, maxlen;
    int wl[MAXLEN + 1];    /* Allow for words >MAXLEN */

    for (i = 0; i < MAXLEN + 1; ++i)
        wl[i] = 0;

    state = OUT;
    len = maxlen = 0;

    while ((c = getchar()) != EOF)
        if (c == ' ' || c == '\n' || c == '\t') {
            if (state == IN) {
                if (len > MAXLEN) {
                    if (++wl[MAXLEN] > maxlen)
                        maxlen = wl[MAXLEN];
                } else {
                    if (++wl[len-1] > maxlen)
                        maxlen = wl[len-1];
                }
                state = OUT;
                len = 0;
            }
        } else {
            ++len;
            if (state == OUT)
                state = IN;
        }

    printf("HORIZONTAL HISTOGRAM:\n");
    for (i = 0; i < MAXLEN + 1; ++i) {
        /* Special case for words of length >MAXLEN  */
        if (i == MAXLEN)
            printf(">%d | ", MAXLEN);
        else
            printf(" %2d | ", i + 1);

        for (j = 0; j < wl[i]; ++j)
            putchar('*');
        putchar('\n');
    }
    
    printf("\nVERTICAL HISTOGRAM:\n");
    for (i = maxlen; i > 0; --i) {
        printf("%2d | ", i);
        for (j = 0; j < MAXLEN + 1; ++j)
            if (wl[j] >= i)
                printf(" * ");
            else
                printf("   ");
        putchar('\n');
    }

    printf("   +-");
    for (i = 0; i < (MAXLEN + 1) * 3; ++i)
        putchar('-');
    putchar('\n');
    printf("     ");
    for (i = 0; i < MAXLEN; ++i)
        printf("%2d ", i + 1);
    printf(">%2d\n", MAXLEN);

    return 0;
}
