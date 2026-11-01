#include <stdio.h>
#include <math.h>

int main () {
    double r, x,y;
    scanf("%lf %lf %lf", &r, &x, &y);

    double eps = 1e-9;
    double dist = sqrt(x * x + y * y);

    if (fabs(dist - r) < eps) {
        printf("On the circle\n");
    } else if (dist < r) {
        printf("In the circle\n");
    } else {
        printf("Out of the circle\n");
    }

    return 0;
}