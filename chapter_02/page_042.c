#include <stdio.h>

int lower(char);

int main() {
    printf("%c", lower('K'));
    return 0;
}

int lower(char c) {
    if (c >= 'A' && c <= 'Z')
        return c + 'a' - 'A';
    else
        return c;
}
