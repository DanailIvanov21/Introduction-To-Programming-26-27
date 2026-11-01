#include <stdio.h>

int main() {
    int num, sum = 0;
    while (scanf("%d", &num) && num != 0) { //Сумираме числата докато потребителята не въведе нула
        sum += num;
    }

    printf("%d\n", sum);
    return 0;
}