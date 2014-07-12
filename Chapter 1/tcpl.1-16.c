/*
 * It makes little sense to just "revise the main routine", since we need to
 * make changes to getline in order to get the desired behaviour -- that's what
 * we'll do then.
 */

#include <stdio.h>

/* In order to ease testing, I've decreased the maximum line length from 1000 to
 * 50, which is a lot easier to overflow.
 */
#define MAXLINE 50    /* maximum input line length */

int getline(char line[], int maxline);
void copy(char to[], char from[]);

/* print the longest input line */
int main(void) {
    int len;    /* current line length */
    int max;    /* maximum length seen so far */
    char line[MAXLINE];     /* current input line */
    char longest[MAXLINE];  /* longest line saved here */

    max = 0;

    while ((len = getline(line, MAXLINE)) > 0)
        if (len > max) {
            max = len;
            copy(longest, line);
        }

    if (max > 0)    /* there was a line */
        /* now we also have to print the real length */
        printf("%s\n(%d characters)\n", longest, max);

    return 0;
}

/* getline: read a line into s, return length */
int getline(char s[], int lim) {
    int c, i;
    int j;  /* j will contain the number of characters read into 's' */

    j = 0;
    for (i = 0; (c = getchar()) != EOF && c != '\n'; ++i) {
        if (i < lim-1) {
            s[j] = c;
            ++j;
        }
    }
    if (c == '\n') {
        if (i <= lim-1) {
            s[j] = c;
            ++j;
        }
        ++i;
    }
    s[j] = '\0';    /* null-terminate 's' */
    return i;
}

/* copy: copy 'from' into 'to'; assume 'to' is big enough */
void copy(char to[], char from[]) {
    int i;

    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}

