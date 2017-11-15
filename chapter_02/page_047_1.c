#include <stdio.h>

int main() {
    int n = 0XFFFF;
    n = n & 0177;
    printf("%d\n", n);

    int x = 1, y = 2;
    printf("%d\n", x & y);
    printf("%d\n", x && y);

    printf("%d\n", ~077);
    printf("%d\n", 0xff & ~077);
    return 0;
}
