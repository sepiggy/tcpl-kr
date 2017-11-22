#include <stdio.h>

struct point {
    int x;
    int y;
};

struct rect {
    struct point pt1;
    struct point pt2;
};

int main() {
    struct point pt = {11, 22};
    struct point maxpt = {320, 200};
    printf("%d, %d", maxpt.x, maxpt.y);

    return 0;
}
