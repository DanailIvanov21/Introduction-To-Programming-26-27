#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int discriminant = b * b - 4 * a * c;
    int rootsCount = 0;

    if (discriminant > 0) {
        rootsCount = 2;

    } else if (discriminant == 0) {
        rootsCount = 1; //стандартно 1 уникален реален корен
    } else {
        rootsCount = 0;
    }

    printf("%d\n", rootsCount);
    return 0;
}