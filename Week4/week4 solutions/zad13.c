#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    scanf("%d", &n);

    int max1 = INT_MIN; // Инициализираме с най-малката възможна стойност за int, които
                            // може да използваме на готово от <limits.h>. Чрез тях
                            //Ще следим двете най-големи числа
    int max2 = INT_MIN;

    for (int i = 0; i < n; i++) {
        int x;
        scanf("%d", &x);

        if (x > max1) {
            max2 = max1;
            max1 = x;
        } else {
            if (x > max2 && x != max1) {
                max2 = x;
            }
        }
    }

    printf("%d %d\n", max1, max2);
    return 0;
}
