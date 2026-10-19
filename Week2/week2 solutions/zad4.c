#include <stdio.h>

int main() {
    long long a, b, c, d;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);

    int isGeom = (b * b == a * c) && (c * c == b * d);

    printf("%d\n", isGeom);
    return 0;
}