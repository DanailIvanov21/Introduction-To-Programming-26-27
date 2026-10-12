#include <stdio.h>

/* Как да мислим върху задачата? Тук просто трябва да се попитаме какво са частно и остатък.
Ако знаем какво са, решенито директно следва от опорециите, които знаем. */

int main()
{
    int a;
    int b;

    printf("Enter two numbers : ");
    scanf("%d %d", &a, &b);

    int quotent = a / b;
    int remainder = a % b;

    printf("The quotent is %d \nThe remainder is %d ",quotent, remainder);
    return 0;
}