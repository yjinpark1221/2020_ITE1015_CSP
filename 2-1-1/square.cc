#include <stdio.h>
void square(double * pd) {
    *pd *= *pd;
}
int main(void) {
    double d;
    scanf("%lf", &d);
    square(&d);
    printf("%f\n", d);
    return 0;
}
