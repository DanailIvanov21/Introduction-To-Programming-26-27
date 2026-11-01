#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    //Тъй като ни трябва само една проверка и отговор да или не ще използваме
    //тернарен оператор за най-четим и прост начин
    int max = (a > b) ? a : b;
    printf("%d\n", max);

    return 0;
}