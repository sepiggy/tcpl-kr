#include <stdio.h>

int bitcount(unsigned);

int main() {
    int r = bitcount(4);
    printf("%d", r);
    return 0;
}

/* counts the number of 1-bits in its integer argument. */
int bitcount(unsigned x) {
    int b;

    for (b = 0; x != 0; x >>= 1) {
        if (x & 01)
            b++;
    }

    return b;
}