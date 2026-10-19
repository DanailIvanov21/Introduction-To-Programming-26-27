#include <stdio.h>

int main() {
    int grade;
    scanf_s("%d", &grade);

    printf("%d\n",  (grade >= 2) && (grade <= 6));
    return 0;
}