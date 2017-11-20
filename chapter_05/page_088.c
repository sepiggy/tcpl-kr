#include <stdio.h>

int main(){
    int a[10];
    int *pa;
    int i;

    pa = a;
    for (i = 0; i < 10; i++) {
        printf("%d\n", a[i]);
    }

    for (i = 0; i < 10; i++) {
        printf("%d\n", *(pa + i));
    }
}
