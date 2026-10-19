#include <stdio.h>

int main() {
    double a, b, c;
    scanf_s("%lf %lf %lf", &a, &b, &c);

    double d = b * b - 4 * a * c;
    int no_real_roots = (d < 0);

    printf("%d\n", no_real_roots);
    return 0;
}