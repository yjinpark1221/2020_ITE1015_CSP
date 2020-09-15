#include <stdio.h>
typedef struct {
    int xpos;
    int ypos;
} Point;

Point getScale2xPoint (const Point* p) {
    Point ret;
    ret.xpos = 2* (p->xpos);
    ret.ypos = 2* (p->ypos);
    return ret;
}

void swapPoints(Point* p1, Point* p2) {
    Point temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main() {
    Point p1, p2;
    scanf("%d%d", &(p1.xpos), &(p1.ypos));
    p2 = getScale2xPoint(&p1);
    printf("Calling getScale2xPoint()\np1 : %d %d\np2 : %d %d\n", p1.xpos, p1.ypos, p2.xpos, p2.ypos);
    swapPoints(&p1, &p2);
    printf("Calling swapPoints()\np1 : %d %d\np2 : %d %d\n", p1.xpos, p1.ypos, p2.xpos, p2.ypos);
    return 0;
}
