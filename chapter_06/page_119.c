#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define BUFSIZE 100
#define MAXWORD 100

struct key {
    char *word;
    int count;
} keytab[] = {
        "auto", 0,
        "break", 0,
        "case", 0,
        "char", 0,
        "const", 0,
        "continue", 0,
        "default", 0,
        "unsigned", 0,
        "void", 0,
        "volatile", 0,
        "while", 0
};

static char buf[BUFSIZE]; /* 用于 ungetch 函数的缓冲区 */
static int bufp = 0; /* buf 中下一个空闲位置 */

int getch();

void ungetch(int);

int getword(char *, int);

int binsearch(char *, struct key *, int);

/* count C keywords */
int main() {
    char word[MAXWORD];
    int i = getword(&word, MAXWORD);
    printf("word = %s\n", word);
    printf("i = %d\n", i);


    return 0;
}


int getch() {
    return (bufp > 0) ? buf[--bufp] : getchar();
}

void ungetch(int c) {
    if (bufp >= BUFSIZE) {
        printf("ungetch: too many characters\n");
    } else {
        buf[bufp++] = c;
    }
}

/* getword: get next word or character from input */
int getword(char *word, int lim) {
    int c;
    char *w = word;

    /* skip white space character */
    while (isspace(c = getch()));

    if (c != EOF) {
        *w++ = c;
    }
    if (!isalpha(c)) {
        *w = '\0';
        return c;
    }
    for (; --lim > 0; w++) {
        if (!isalnum(*w = getch())) {
            ungetch(*w);
            break;
        }
    }
    *w = '\0';
    return word[0];
}

