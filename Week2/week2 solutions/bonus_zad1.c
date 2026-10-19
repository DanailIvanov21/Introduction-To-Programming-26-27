#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int k = n / 3; // брой числа, които се делят на 3 до n
    int sum = 3 * k * (k + 1) / 2; // формула за сума: 3*(1 + 2 + ... + k)

    printf("%d\n", sum);
    return 0;
}