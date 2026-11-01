#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    // Специален случай за 0
    if (n == 0) {
        printf("0\n");
        return 0;
    }

    int max_count = -1;
    int best_digit = 0;

    // Обхождаме всички възможни цифри от 0 до 9 в нарастващ ред
    for (int d = 0; d <= 9; d++) {
        int current_count = 0;
        int temp = n;

        // Преброяваме колко пъти цифрата 'd' се среща в числото
        while (temp > 0) {
            if (temp % 10 == d) {
                current_count++;
            }
            temp /= 10;
        }

        // Тъй като вървим от 0 към 9, строго по-голямо
        // гарантира, че при равен брой се запазва най-малката цифра.
        if (current_count > max_count) {
            max_count = current_count;
            best_digit = d;
        }
    }

    printf("%d\n", best_digit);
    return 0;
}