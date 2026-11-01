#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    for (int i = a; i <= b; i++) {
        if (i >= 2) { //защото едно не е просто число
            int is_prime = 1;

            for (int j = 2; j * j <= i; j++) {
                if (i % j == 0) {
                    is_prime = 0;
                    break;
                }
            }

            if (is_prime) {
                printf("%d ", i);
            }
        }
    }

    printf("\n");
    return 0;
}