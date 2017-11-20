#include <stdio.h>

void mystrcpy(char *, char *);

int main() {
    char *t = "Hello k&r";
    char s[100];

    mystrcpy(s, t);
    printf("%s", s);
    return 0;
}

/* strcpy: copy t to s; pointer version */
void mystrcpy(char *s, char *t) {
    while (*s++ = *t++);
}

