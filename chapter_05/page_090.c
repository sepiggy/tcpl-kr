#include <stdio.h>

int myprintf(int *);

int main() {
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int salen = myprintf(a + 4);
    printf("salen=%d", salen);

    return 0;
}

int myprintf(int *a) {
    int salen;

    salen = 0;
    while (*a != 1) {
        printf("%d\n", *a);
        salen++;
        a--;
    }

    printf("%d\n", *a);
    salen++;
    return salen;
}
