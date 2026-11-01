#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int d1 = n / 1000;
    int d2 = (n / 100) % 10;
    int d3 = (n / 10) % 10;
    int d4 = n % 10;

    int num1 = d1 * 10 + d4;
    int num2 = d2 * 10 + d3;

    if (num1 < num2) {
        printf("%d < %d\n", num1, num2);
    } else if (num1 > num2) {
        printf("%d > %d\n", num1, num2);
    } else {
        printf("%d == %d\n", num1, num2);
    }

    return 0;
}