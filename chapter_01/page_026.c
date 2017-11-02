#include <stdio.h>

int power(int m, int n) {
    int i;
    int result;

    for (i = 1, result = 1; i <= n; i++) {
        result *= m;
    }

    return result;
}

int main() {
    int result;

    result = power(2, 5);
    printf("%d", result);

    return 0;
}