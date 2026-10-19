#include <stdio.h>

//Ако в задачата ни се каже реално число, обикновено се говори за float, double.

int main() {
    double a, b;
    scanf_s("%lf %lf", &a, &b);

    // Размяна чрез помощна променлива temp
    double temp = a;
    a = b;
    b = temp;

    printf("a = %lf, b = %lf\n", a, b);

    return 0;
}