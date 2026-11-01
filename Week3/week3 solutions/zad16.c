#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int hundreds = n / 100;
    int tens = (n / 10) % 10;
    int lastDigit = n % 10;

    if (lastDigit % 2 == 0) {
        lastDigit = lastDigit % 3;
    } else {
        // нечетнo (1, 3, 5, 7, 9)
        lastDigit = lastDigit % 2;
    }

    int res = hundreds * 100 + tens * 10 + lastDigit;
    printf("%d\n", res);

    return 0;
}