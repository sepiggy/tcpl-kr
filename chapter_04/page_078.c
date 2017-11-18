#include <stdio.h>

void myprintd(int);

int main() {
    myprintd(1234);
    return 0;
}

/* myprintd: print n in decimal */
void myprintd(int n) {
    if (n < 0) {
        putchar('-');
        n = -n;
    }
    if (n / 10)
        myprintd(n / 10);
    putchar(n % 10 + '0');
}
