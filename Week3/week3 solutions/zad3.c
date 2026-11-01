#include <stdio.h>

int main() {
    int year;
    if (scanf("Year: %d", &year) != 1) {
        scanf("%d", &year);
    }

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("Leap year\n");
    } else {
        printf("Not a leap year\n");
    }

    return 0;
}