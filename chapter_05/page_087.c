#include <ctype.h>
#include <stdio.h>

#define BUFSIZE 100

char buf[BUFSIZE];  /* 用于ungetch函数的缓冲区*/
int bufp = 0;   /* buf中下一个空闲位置 */

int getch(void);

void ungetch(int);

int getint(int *);

int main(void) {
    int *pint;

    getint(pint);
    printf("%d", *pint);
    return 0;
}

/* 取字符函数, 取一个字符 (可能是压回的字符) */
int getch(void) {
    return (bufp > 0) ? buf[--bufp] : getchar();
}

/* 反取字符函数, 把字符压回到输入中 */
void ungetch(int c) {
    if (bufp >= BUFSIZE)
        printf("ungetch: too many characters\n");
    else
        buf[bufp++] = c;
    return;
}

/* getint函数: 将输入中的下一个整型数赋值给*pn */
int getint(int *pn) {
    int c, sign;

    while (isspace(c = getch())); /* skip white space */

    if (!isdigit(c) && c != EOF && c != '+' && c != '-') {
        ungetch(c); /* 输入不是一个数字 */
        return 0;
    }

    sign = (c == '-') ? -1 : 1;

    if (c == '+' || c == '-') {
        c = getch();
    }

    for (*pn = 0; isdigit(c); c = getch()) {
        *pn = 10 * *pn + (c - '0');
    }
    *pn *= sign;
    if (c != EOF)
        ungetch(c);
    return c;
}

