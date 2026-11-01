#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    long long a = 0, b = 1;
    for (int i = 0; i < n; i++) {
        if (i == 0) {
            printf("%lld", a);
        } else if (i == 1) {
            printf(" %lld", b);
        } else {
            long long next = a + b;
            printf(" %lld", next);
            a = b;
            b = next;
        }
    }
    //Тук използваме long long като тип, защото числата на Фибоначи стават доста големи
    //при достатъчно голямо n и е възможно типът да превърти

    printf("\n");
    return 0;
}