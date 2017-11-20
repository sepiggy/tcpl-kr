#include <stdio.h>

void strcpy(char *s, char *t);

int main() {
    char t[] = "Hello world!";
    char s[100];

    strcpy(s, t);
    printf("%s", s);
    return 0;
}

/* strcpy: copy t to s; array subscript version */
void strcpy(char *s, char *t) {
    int i;

    for (int i = 0; t[i] != '\0'; i++) {
        s[i] = t[i];
    }
    s[i] = '\0';

    return;
}
