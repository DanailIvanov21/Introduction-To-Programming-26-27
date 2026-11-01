#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    // Условие 1: последна цифра е 5
    int isLastDigit5 = (n % 10 == 5);

    // Условие 2: дели се на 3 и на 5
    int isDivBy = (n % 3 == 0 && n % 5 == 0);

    if (isDivBy || isLastDigit5) {
        printf("TRUE\n");
    } else {
        printf("FALSE\n");
    }
    return 0;
}