#include <stdio.h>

void squeeze(char s[], int c);

int main() {
    char s[] = "abXaXb";
    int c = 'X';

    squeeze(s, c);
    printf("%s", s);
    return 0;
}

/* removes all occurrences of the character c from the string s. */
void squeeze(char s[], int c) {
    int i, j;

    for (i = j = 0; s[i] != '\0'; i++) {
        if (s[i] != c) {
            s[j++] = s[i];
        }
    }
    s[j] = '\0';
}
