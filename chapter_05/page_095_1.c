#include <stdio.h>

int strcmp(char *, char *);

int main() {
    char *s = "xyze";
    char *t = "xyzd";
    int r;

    r = strcmp(s, t);
    printf("%d", r);
    return 0;
}

int strcmp(char *s, char *t) {
    int i;

    for (i = 0; s[i] == t[i]; i++) {
        if (s[i] == '\0')
            return 0;
    }

    return s[i] - t[i];
}


