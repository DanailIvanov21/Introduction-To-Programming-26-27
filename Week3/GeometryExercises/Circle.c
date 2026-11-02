#include <stdio.h>

int main() {
    int x, y;
    scanf("%d %d", &x, &y);

    //1.Координатите на центъра на голямата окръжност
    int centerAx = -4; int centerAy = -1;
    int Bx = -5; int By = 5;
    int Cx = 2; int Cy = 0;

    //Пресмятаме радиусът на голямата окръжност
    int R1 = (Bx - centerAx)*(Bx - centerAx) + (By - centerAy)*(By - centerAy);
    //Проверяваме дали нашата точка се намира в голямата окръжност
    int distFromA = (x - centerAx)*(x - centerAx) + (y - centerAy)*(y - centerAy);
    int insideOuterCircle = distFromA <= R1;

    //Координатите на центъра на малката окръжност
    int centerDx = -3; int centerDy = -5;
    int Ex = -3; int Ey = 0;

    //Пресмятаме радиусът на малката окръжност
    int R2 = (Ex - centerDx)*(Ex - centerDx) + (Ey - centerDy)*(Ey - centerDy);

    // Условието на задачата иска да кажем дали точката е в оцветената част от кръга, затова
    // Освен за големия кръг трябва да проверим дали се намира в малкия.
    // Ако се намира в малкия кръг, тогава нашата точка не е в оцветения очастък.
    //Проверяваме дали нашата точка се намира в голямата окръжност.
    int distFromD = (x - centerDx)*(x - centerDx) + (y - centerDy)*(y - centerDy);
    int insideInnerCircle = distFromD <= R2;


    // 2. Условия за правите. Тъй като имаме една отрязана част от окръжността, ще
    // използваме уравнения на прави, за да преценим дали нашата точка се намира между тях.
    //Ако точката е отляво на правата Б
    int line1 = (y - centerAy) * (Bx - centerAx) - (x - centerAx) * (By - centerAy) >= 0;

    // и точката е отдясно на правата С, значи точката ни НЕ лежи между двете прави
    //и е в оцветаната част.
    int line2 = (y - centerAy) * (Cx - centerAx) - (x - centerAx) * (Cy - centerAy) <= 0;

    // 3. Общ логически израз за оцветената област:
    int inColoredCircle = line1 && line2 && insideOuterCircle && !insideInnerCircle;

    printf("Is it in the colored section? %d\n", inColoredCircle);

    return 0;
}