#include <string.h>
#include <stdio.h>

int trim(char[]);

int main() {
    char s[] = "abcde 1234 \t xyz\n\t ";
    printf("%d\n", strlen(s));
    trim(s);
    printf("%d\n", strlen(s));
    printf("%s\n", s);
    return 0;
}

int trim(char s[]) {
    int n;

    for (n = strlen(s) - 1; n >= 0; n--) {
        if (s[n] != ' ' && s[n] != '\t' && s[n] != '\n') {
            break;
        }
    }

    s[++n] = '\0';
    return n;
}
