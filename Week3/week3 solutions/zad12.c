#include <stdio.h>

int main() {
    int day, month, year;
    scanf("%d %d %d", &day, &month, &year);

    int isLeap = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    int daysInMonth = 0;

    int valid = 1;

    if (month < 1 || month > 12 || year < 1 || day < 1) {
        valid = 0;  //Проверяваме първо дали входът е валиден като стойности.
    } else {

        if (month == 2) {  //Разглеждаме специалните случай за месеците
            daysInMonth = isLeap ? 29 : 28;

        } else if (month == 4 || month == 6 || month == 9 || month == 11) {
            daysInMonth = 30;

        } else {
            daysInMonth = 31;
        }

        if (day > daysInMonth) {
            valid = 0;
        }
    }

    printf("%d\n", valid);
    return 0;
}