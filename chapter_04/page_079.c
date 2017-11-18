#include <stdio.h>

void qsort(int[], int, int);

void swap(int[], int, int);

int main() {
    int i;
    int a[] = {11, 99, 22, 44, 77, 33, 88};

    qsort(a, 0, 6);
    for (i = 0; i < 7; i++) {
        printf("%d\n", a[i]);
    }

    return 0;
}

/* qsort: sort v[left]...v[right] into increasing order */
void qsort(int v[], int left, int right) {
    int i, last;

    if (left >= right)
        return;

    swap(v, left, (left + right) / 2);
    last = left;
    for (i = left + 1; i <= right; i++)
        if (v[i] < v[left])
            swap(v, ++last, i);
    swap(v, left, last);
    qsort(v, left, last - 1);
    qsort(v, last + 1, right);
}

/* swap: interchange v[i] and v[j] */
void swap(int v[], int i, int j) {
    int temp;

    temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}