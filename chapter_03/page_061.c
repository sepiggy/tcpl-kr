#include <stdio.h>
#include <string.h>

int ahase(char[], char[]);

int main() {
    char a[] = "abcde";
    char b[] = "zyxwa";
    printf("%d", ahase(a, b));

    return 0;
}

/* determining whether two arrays a and b have an element in common */
int ahase(char a[], char b[]) {
    int found = 0;
    int i, j, alength, blength;

    alength = strlen(a);
    blength = strlen(b);

    // 找到即停止循环, 因此循环条件加上 !found
    for (i = 0; i < alength && !found; i++)
        for (j = 0; j < blength && !found; j++)
            if (a[i] == b[j])
                found = 1;

    if (found)
        return 1;
    return 0;
}