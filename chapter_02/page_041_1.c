/*convert s to integer*/

#include <stdio.h>
#include <math.h>

int atoi(char[]);

int str_len(char s[]);

int char_to_int(char);

int main() {
    printf("%d\n", atoi("1234"));
    printf("%d\n", atoi("19891209"));
    return 0;
}

int atoi(char s[]) {
    int len;
    int result;

    len = str_len(s);
//    printf("len=%d", len);
    result = 0;
    for (int i = 0; i < len; ++i) {
        int digit = char_to_int(s[i]);
//        printf("digit=%d", digit);
        result += pow(10, len - 1 - i) * digit;
    }

    return result;
}

int str_len(char s[]) {
    int i;

    i = 0;
    while (s[i] != '\0') {
        i++;
    }
    return i;
}

int char_to_int(char c) {
    int rest;

    rest = c - '0';
    return rest;
}
