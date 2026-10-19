#include <stdio.h>

int main() {
    double a, b;
    scanf("%lf %lf", &a, &b);

    // (a > b) е 1, ако a е по-голямо, и 0 в противен случай.
    // (b >= a) е 1, ако b е по-голямо или равно, и 0 в противен случай.
    double max = (a * (a > b)) + (b * (b >= a));

    printf("%.2f\n", max);

    return 0;
}