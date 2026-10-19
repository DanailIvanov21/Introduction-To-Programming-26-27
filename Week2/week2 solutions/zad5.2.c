#include <stdio.h>

int main() {
    double a, b;
    scanf_s("%lf %lf", &a, &b);

    // Размяна чрез аритметични операции
    a = a + b;
    b = a - b;   //като заместим променливата а се получава a + b - b, т.е b = a
    a = a - b;

    printf("a = %lf, b = %lf\n", a, b);
    return 0;
}