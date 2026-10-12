#include <stdio.h>

int main() {

    int num = 0;
    printf("Enter a number: ");
    scanf_s("%d", &num);
    printf("The number without the last digit is %d.", num / 10);

    return 0;
}