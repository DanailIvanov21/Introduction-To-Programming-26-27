#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    for (int i = a; i <= b; i++) {
        int unique = 1;
        int temp = i;

        // Взимаме всяка цифра една по една
        while (temp > 0 && unique) {
            int current_digit = temp % 10;
            int rest = temp / 10;

            // Проверяваме дали тази цифра се повтаря в останалата част от числото
            while (rest > 0) {
                if (current_digit == (rest % 10)) {
                    unique = 0;
                    break;
                }
                rest /= 10;
            }

            temp /= 10;
        }

        // Ако цифрите са различни, печатаме числото
        if (unique) printf("%d", i);
    }

    return 0;
}