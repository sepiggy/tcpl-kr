#include <stdio.h>

#define min(a, b) ((a) < (b) ? (a) : (b))
#define max(a, b) ((a) > (b) ? (a) : (b))


struct point {
    int x;
    int y;
};

struct rect {
    struct point pt1;
    struct point pt2;
};

struct point makepoint(int, int);

struct point addpoint(struct point, struct point);

int ptinrect(struct point, struct rect);


int main() {
    struct rect screen;
    struct point midde;
    struct point origin, *pp;

    screen.pt1 = makepoint(0, 0);
    screen.pt2 = makepoint(200, 100);
    midde = makepoint((screen.pt1.x + screen.pt2.x) / 2, (screen.pt1.y + screen.pt2.y) / 2);

    origin = makepoint(1, 2);
    pp = &origin;
    printf("origin is (%d,%d) \n", (*pp).x, (*pp).y);
    printf("origin is (%d,%d) \n", pp->x, pp->y);

    return 0;
}

/* canonrect: canonicalize coordinates of rectangle */
struct rect canonrect(struct rect r) {
    struct rect temp;

    temp.pt1.x = min(r.pt1.x, r.pt2.x);
    temp.pt1.y = min(r.pt1.y, r.pt2.y);
    temp.pt2.x = max(r.pt1.x, r.pt2.x);
    temp.pt2.y = max(r.pt1.y, r.pt2.y);

    return temp;
}

/* ptinrect: return 1 if p in r, 0 if not */
int ptinrect(struct point p, struct rect r) {
    return p.x >= r.pt1.x && p.x < r.pt2.x && p.y >= r.pt1.y && p.y < r.pt2.y;
}

/* addpoints: add two points */
struct point addpoint(struct point pt1, struct point pt2) {

    pt1.x += pt2.x;
    pt1.y += pt2.y;
    return pt1;
}

/* makepoint: make a point from x and y components */
struct point makepoint(int x, int y) {
    struct point temp;

    temp.x = x;
    temp.y = y;
    return temp;
}
