#include <stdio.h>

int main() {

    int c;
    int line_counting;

    for (c = 0, line_counting = 0; (c = getchar()) != EOF; c++) {
        if (c == '\n') {
            line_counting++;
        }
    }

    printf("%d", line_counting);

    return 0;
}