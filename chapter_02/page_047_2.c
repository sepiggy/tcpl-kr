#include <stdio.h>

unsigned getbits(unsigned x, int p, int n);

int main() {
    int r = getbits(0xFFAE, 4, 3);
    printf("%d", r);
    return 0;
}

/* getbits: get n bits from position p */
unsigned getbits(unsigned x, int p, int n) {
    return (x >> (p + 1 - n) & ~(~0 << n));
}
