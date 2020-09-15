#include <stdio.h>
#include <stdlib.h>
#include <math.h>
typedef struct{
    int xpos;
    int ypos;
} Point;

double distance(const Point* p1, const Point* p2) {
    int x = p1->xpos - p2->xpos;
    int y = p1->ypos - p2->ypos;
    return sqrt((double)x*x+y*y);
}

double getShortest (const Point* points, int n) {
    double min = distance(points, points+1);
    for(int i = 0; i < n-1; ++i) {
        for(int j = i+1; j < n; ++j) {
            double d = distance(points+i, points+j);
            if (min > d) min = d;
        }
    }
    return min;
}

double getLongest(const Point* points, int n) {
    double max = distance(points, points+1);
    for(int i = 0; i < n-1; ++i) {
        for(int j = i+1; j < n; ++j) {
            double d = distance(points+i, points+j);
            if (max < d) max = d;
        }
    }
    return max;
}
    
int main() {
    int n;
    scanf("%d", &n);
    Point * arr = (Point *) malloc(sizeof (Point) *n);
    for(int i = 0; i < n; ++i) {
        scanf("%d%d", &((arr+i)->xpos), &((arr+i)->ypos));
    }
    printf("longest: %f\nshortest: %f\n", getLongest(arr, n), getShortest(arr, n));
    return 0;
}
