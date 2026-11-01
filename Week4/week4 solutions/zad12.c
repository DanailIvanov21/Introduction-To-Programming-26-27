#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    // Oбхождаме възможните събираеми с цикъл
    for (int i = 2; i <= n / 2; i++) {
        int a = i, b = n - i;

        int is_a = 1;  //Проверяваме дали първото число a се дели на някое число от 2 до
                      //неговия квадратен корен. Ако се дели, то не е просто (is_a = 0).

        for (int j = 2; j * j <= a; j++) {
            if (a % j == 0) {
                is_a = 0;
                break;
            }
        }

        int is_b = 1; //Aналогично
        for (int j = 2; j * j <= b; j++) {
            if (b % j == 0) {
                is_b = 0;
                break;
            }
        }

        if (is_a && is_b) { //Ако намерим такива
            printf("%d = %d + %d\n", n, a, b);
        }
    }

    return 0;
}