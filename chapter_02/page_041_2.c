/*convert s to integer*/

#include <stdio.h>

int atoi(char[]);

int str_len(char s[]);

int char_to_int(char);

int main() {
    printf("%d\n", atoi("1234"));
    printf("%d\n", atoi("19891209"));
    return 0;
}

int atoi(char s[]) {
    int i, n;

    for (i = 0, n = 0; s[i] >= '0' && s[i] <= '9'; ++i)
        n = 10 * n + (s[i] - '0');
    return n;
}

