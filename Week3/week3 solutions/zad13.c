#include <stdio.h>

int main() {
    int n, k;
    if (scanf("%d %d", &n, &k) != 2) return 0;

    int first = n / 100;
    int second =  (n / 10) % 10;
    int third = n % 10;

    int product = first * second * third;

    (product > k) ? printf("YES %d \n", product + k) : printf("NO %d\n", k - product);
    return 0;
}