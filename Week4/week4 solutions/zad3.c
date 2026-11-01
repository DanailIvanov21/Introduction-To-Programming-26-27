#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    long long fact = 1;
    for (int i = 1; i <= n; i++) {  //факториел от n пресмятаме ; 1 * 2 * ... * n-1 * n
        fact *= i;
    }

    printf("%lld\n", fact);
    return 0;
}