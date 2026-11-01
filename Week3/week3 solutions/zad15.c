#include <stdio.h>

int main() {
    double a, b;
    char op;
    scanf("%lf %lf %c", &a, &b, &op);

   switch (op) {
       case '+':
           printf("%2.lf", a + b);
           break;

       case '-':
           printf("%2.lf", a - b);
           break;

       case '*':
           printf("%2.lf", a * b);
           break;

       case '/':
           if (b == 0) {
               printf("Cannot divide by zero!");
               break;
           }

           printf("%2.lf ", a / b);
           break;
      default:
           printf("Not a valid operation!");
           break;
   }

    return 0;
}