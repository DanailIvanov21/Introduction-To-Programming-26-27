#include <stdio.h>
#include <math.h>

int main() {
    double left, right, num;
   scanf("%lf %lf %lf", &left, &right, &num);

    double eps = 1e-9;

    // Проверка дали числото е извън интервала
    if (num < left - eps || num > right + eps) {
        printf("The number is not within the given interval.\n");
    } else {
        printf("The number is within the given interval. ");
        // Проверка дали съвпада с някой от краищата
        if (fabs(num - left) < eps || fabs(num - right) < eps) {
            printf("The interval is closed.\n");
        } else {
            printf("The interval is open.\n");
        }
    }

    return 0;
}