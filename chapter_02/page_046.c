#include <stdio.h>

void strcat(char s[], char t[]);

int main() {
    char s[] = "hello";
    char t[] = " world";
    strcat(s, t);
    printf("%s", s);
    return 0;
}

/* strcat: concatenate t to end of s; s must be big enough */
void strcat(char s[], char t[]) {

    int i, j;

    i = j = 0;

    while (s[i] != '\0') /* find end of s */
        i++;

    while ((s[i++] = t[j++]) != '\0'); /* copy t */

}
