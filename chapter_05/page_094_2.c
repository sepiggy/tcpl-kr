#include <stdio.h>

void strcpy(char *s, char *t);

int main() {
    char t[] = "Hello world 123!";
    char s[100];

    strcpy(s, t);
    printf("%s", s);
    return 0;
}

/* strcpy: copy t to s; pointer version */
void strcpy(char *s, char *t) {
    int i;

    i = 0;
    while ((*s = *t) != '\0') {
        s++;
        t++;
    }
    return;
}

