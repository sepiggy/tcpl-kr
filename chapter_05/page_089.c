#include <stdio.h>

int strlen(char *);

int main() {
    char s[10] = "hello1\t";
    int len = strlen(s);
    printf("%d", len);
    return 0;
}

/* strlen: return length of string s */
int strlen(char *s) {
    int length;

    length = 0;
    while (*s != '\0') {
        s++;
        length++;
    }
    return length;
}
