#include <stdio.h>

int main() {
    int x, y;
    printf("Please enter the corrdinates of the pont (x, y): ");
    scanf(" %d %d", &x, &y);

    //Намираме центъра на окръжността и допирната точка като гледаме чертежа
    int Ax = 1; int Ay = 1;
    //Ще кръстим точката по контура на окръжността, която намерихме от чертежа, B.
    int Bx = 0; int By = 1;

    //Намираме радиусът
    int R = (Bx - Ax) * (Bx - Ax) + (By - Ay) * (By - Ay);
    //Проверяваме дали точката е в окръжността
    int isInCircle = (x - Ax) * (x - Ax) + (y - Ay) * (y - Ay) <= R;

    //Сега трябва да проверим дали точката е в правоъгълника
    //Намираме мин и макс на границите на правоъгълника, за можем да получим интерала от точки
    int isInRectangle = (x >= -2 && x <= 1) && (y >= -1 && y <= 1);

    int res = !isInCircle && isInRectangle;

    printf("Is the point in the colored area ?\n  %d",
             (res) ?  "Yes":  "No");

    return 0;
}