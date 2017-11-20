#include <stdio.h>

int strlen(char *s);

int main() {
    char *s = "helloworld";
    printf("%d", strlen(s));

    return 0;
}

/* strlen: return length of string s */
int strlen(char *s) {
    char *start;

    start = s;
    while (*s != '\0') {
        s++;
    }
    s--;
    return s - start + 1;
}
