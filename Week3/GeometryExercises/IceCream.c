#include <stdio.h>

int main() {
    int x, y;
    scanf("%d %d", &x, &y);

    // 1. ВАФЛЕНА ФУНИЙКА (Триъгълник)
    // Върхове: A(-1, -2), B(5, -2), C(2, -10)

    int Ax = -1, Ay = -2;
    int Bx = 5,  By = -2;
    int Cx = 2,  Cy = -10;

    // Уравнения на прави през върха C(2, -10) и точките A и B
    int lineCA = (y - Cy) * (Ax - Cx) - (x - Cx) * (Ay - Cy);
    int lineCB = (y - Cy) * (Bx - Cx) - (x - Cx) * (By - Cy);

    // Точката е във фунийката, ако е между y = -10 и y = -2
    // и лежи между двете прави CA и CB
    int inCone = (y <= -2) && (y >= -10) && (lineCA <= 0) && (lineCB >= 0);

    // 2. МЕНТОВ СЛАДОЛЕД  Център (2,0), Радиус R = 4
    int centerMintX = 2, centerMintY = 0;
    int R1_sq = 16;

    //Проверяваме дали точката е в ментовата топка
    // Формула R^2 = (x-x1)^2 - (y - y1)^2
    int distFromMint = (x - centerMintX)*(x - centerMintX) +
                       (y - centerMintY)*(y - centerMintY);
    int inMintIceCream = distFromMint <= R1_sq;

    // 3. ШОКОЛАДОВ СЛАДОЛЕД Център (4,4), Радиус R = 4
    int centerChocoX = 4, centerChocoY = 4;
    int R2_sq = 16;

    //Проверяваме дали точката е в шоколодавата топка
    int distFromChoco = (x - centerChocoX)*(x - centerChocoX) +
                        (y - centerChocoY)*(y - centerChocoY);
    int inChocoIceCream = distFromChoco <= R2_sq;


    // 4. ПРОВЕРКИ
    if (inCone) {
        printf("Точката е във вафлената фунийка.\n");
    } else if (inMintIceCream && !inChocoIceCream) {
        printf("Точката е в ментовата топка.\n");
    } else if (inChocoIceCream &&  !inMintIceCream) {
        printf("Точката е в шоколадовата топка.\n");
    } else {
        printf("Точката е извън сладоледа.\n");
    }

    return 0;
}