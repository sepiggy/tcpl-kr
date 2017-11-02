#include <stdio.h>

int power(int, int);

int main() {
    printf("%d", power(2, 5));
    return 0;
}

int power(int base, int n) {
    int p;

    for (p = 1; n > 0; --n) {
        p = p * base;
    }
    return p;
}