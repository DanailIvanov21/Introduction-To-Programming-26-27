#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int temp = n, rev = 0;
    while (temp > 0) {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }

    printf("%d\n", (n == rev) ? 1 : 0);
    return 0;
}