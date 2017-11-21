#include <stdio.h>
#include <string.h>

#define MAXLEN 1000 /* max length of any input line */
#define ALLOCSIZE 10000 /* size of available space */

static char allocbuf[ALLOCSIZE];
static char *allocnp = allocbuf;

int mygetline(char *, int);

char *alloc(int);

void afree(char *);

int readlines(char *[], int);

void writelines(char *[], int);

int main() {
    char s[100];
    int r = mygetline(s, 100);
    printf("%d", r);
    return 0;
}

char *alloc(int size) {
    if (ALLOCSIZE - (allocnp - allocbuf) >= size) {
        allocnp += size;
        return allocnp - size;
    }
    return NULL;
}

void afree(char *p) {
    if (p > allocbuf && p < allocbuf + ALLOCSIZE) {
        allocnp = p;
    }
}

/* readlines: read input lines */
int readlines(char *lineptr[], int maxlines) {
    int len, nlines;
    char *p, line[MAXLEN];

    nlines = 0;
    while ((len = mygetline(line, MAXLEN)) > 0) {
        if (nlines >= maxlines || p = alloc(len) == NULL) {
            return -1;
        } else {
            line[len - 1] = '\0';
            strcpy(p, line);
            lineptr[nlines++] = p;
        }
    }
    return nlines;
}

/* writelines: write output lines */
void writelines(char *lineptr[], int nlines) {
    while (nlines-- > 0) {
        printf("%s\n", *lineptr++);
    }
}

/* mygetline: read a line to s and return its length */
int mygetline(char *s, int lim) {
    int ch;
    int i = 0;

    while (i < lim - 1 &&
           (ch = getchar()) != EOF && ch != '\n') {
        *s++ = ch;
        i++;
    }
    if (ch == '\n')
        *s++ = ch;
    *s = '\0';
    return i;
}