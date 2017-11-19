#include <stdio.h>

void swap(int *, int *);

int main() {
    int a, b;

    a = 1, b = 2;
    swap(&a, &b);
    printf("a=%d, b=%d", a, b);

    return 0;
}

void swap(int *px, int *py) {
    int temp;

    temp = *px;
    *px = *py;
    *py = temp;

    return;
}
