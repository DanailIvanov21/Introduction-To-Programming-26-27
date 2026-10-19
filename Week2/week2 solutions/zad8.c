#include <stdio.h>

int main()
{
    unsigned a = 0;
    scanf_s("%u", &a);

    //Нека за примера променливата а да има стойност 528
    unsigned lastDigit = a % 10;  //528 % 10 = 8
    unsigned middleDigit = (a / 10) % 10; // (528 / 10) % 10 = 52 % 10 = 2
    unsigned firstDigit = (a / 100) % 10; // (528 / 100) % 10 = 5 % 10 = 5

    //Проверяваме дали някоя от цифрите е равна на 7 и записваме резултата в променливата res
    int res = firstDigit == 7 || middleDigit == 7 || lastDigit == 7;

    printf("Result %u", res);

    return 0;
}