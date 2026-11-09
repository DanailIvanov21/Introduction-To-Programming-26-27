#include <stdio.h>

int main() {
    int x, y;
    printf("Въведете координати (x y): ");
    scanf("%d %d", &x, &y);

    // 1. Дефиниране на координатите с променливи
    //
    // Връх (център) на сектора A:
    int Ax = -2; int Ay = -1;
    int Fx = -5, Fy = 3;
    int Bx =  1, By = 5;

    //2.
    //Радиусът на външния кръг (дистанцията между D и E):
    int outerCircleR = (Bx - Ax)*(Bx - Ax) + (By - Ay)*(By - Ay);
    //Проверяваме дали нашата точка на цялата окръжност
    int isInOuterCircle = (x - Ax)*(x - Ax) + (y - Ay) * (y - Ay) <= outerCircleR;

    //3. Започваме да ограничаваме
    // Вътрешен бял кръг:
    int Dx = -1, Dy = 4;   // Център D(-1, 4)
    int Ex  = -1, Ey  = 5;   // Точка E(-1, 5) на окръжността

    // Радиусът на вътрешния кръг (дистанцията между D и E):
    int innerCircleR = (Ex - Dx)*(Ex - Dx) + (Ey - Dy)*(Ey - Dy);
    //Проверяваме дали нашата точка на цялата неоцветена вътрешна окръжност
    int isInInnerCircle = (x - Dx)*(x - Dx) + (y - Dy) * (y - Dy) <= innerCircleR;


    // 4. Прави
    // Сега трябва да ограничим нашата точка да попада само в оцветената чацт на окръжността
    // Използваме уравнения на прави : (y - y1)*(x2 - x1) - (x - x1)*(y2 - y1)
    int AF = (y - Ay) * (Fx - Ax) - (x - Ax) * (Fy - Ay);
    int AB = (y - Ay) * (Bx - Ax) - (x - Ax) * (By - Ay);

    // Дали е в оцветената част спрямо прави (знаците зависят от ориентацията)
    int inSector = (AF <= 0) && (AB >= 0);

    // 5. Резултат
    int isInColored = isInOuterCircle && !isInInnerCircle && inSector;

    printf("Is it in the colored section only ?\n" ,
                   (isInColored) ? "Yes": "No");

    return 0;
}