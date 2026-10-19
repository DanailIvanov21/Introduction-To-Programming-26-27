#include <stdio.h>

int main() {
    int n;
    scanf_s("%d", &n);

    int isTwoDigits = (n >= 10 && n <= 99);

    /* Ако числото е двуцифрено, променливата isTwoDigits ще има стойност 1.
       Като я заместим в изразът долу ще получим резултатът -
       res = 1 * n + (!1) * (n % 10) = 1 *n + 0* (n % 10) = 1 * n

       И обратно, ако числото n не е двуцифрено, променливата isTwoDigits ще има стойност 0
       и съответно изразът ще има стойност -
       res = 0 * n + (!0) * (n % 10) = 1 * (n % 10) = n % 10, което ни дава последната цифра
       на числото.
    */
    int res = isTwoDigits * n + (!isTwoDigits) * (n % 10);

    printf("The result is %d\n", res);
    return 0;
}