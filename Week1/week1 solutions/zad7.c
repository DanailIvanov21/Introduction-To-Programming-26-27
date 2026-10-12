#include <stdio.h>

/*Със знанията, които имаме досега тази задача може да ни се струва трудна за решаване.
 Всъщност тук се използва една известна формула n(n+1) / 2, която ни дава сумата на числата от
 1 до  n.*/

int main(){
    int num = 0;
    printf("Enter a number: ");
    scanf_s("%d", &num);
    printf("The sum of the numbers from 1 to %d is %d.", num, num * (num + 1) / 2);

    return 0;
}