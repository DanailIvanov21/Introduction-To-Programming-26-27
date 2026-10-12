#include <stdio.h>

/*Как да мислим върху задачата?
 Първо ще запазим краищата на интервала като четири цели числа.
 После трябва да си помислим кога интервалите се пресичат.
 Два интервала се пресичат тогава, когато имат поне една обща точка.
 Това го проверяваме чрез a <= d && a <= b. Проверяваме a <= d,
 за да хванем некоректен вход като  [2 5] [3 1] */


int main(){

int a = 0; /* Първите две числа са за първия интервал */
int b = 0;

int c = 0; /*Останалите две числа са за краищата на втория интервал*/
int d = 0;

printf("Enter the numbers for the first interval ");
scanf_s("%d %d", &a, &b);

printf("Enter the numbers for the second interval ");
scanf_s("%d %d", &c, &d);

printf("Are the intervals intersecting ?\n%d", a <= d && c <= b);


return 0;
}