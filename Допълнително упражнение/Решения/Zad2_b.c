#include<stdio.h>

int main () {
    int x, y;
    printf("Enter two the coordinates of the point (x,y): ");
    scanf(" %d %d", &x, &y);

    int Ax = -1; int Ay = -1;
    int Bx = -1; int By = 0;

    int R = (Bx - Ax)*(Bx - Ax) + (By - Ay) * (By - Ay);
    int isInCircle = (x - Ax) * (x - Ax) + (y - Ay) * (y - Ay) <= R;

    //Сега трябва да ограничим областта до частта, която е между двете прави CD и CB
    int Cx = 0; int Cy = -1;
    int Dx = -3; int Dy = -0;

    int CD = (y - Cy)*(Cx - Dx) - (x - Cx)*(Cy - Dy);
    int CB = (y - Cy)*(Cx - Bx) - (x - Cx)*(Cy - By);

    int isInColored = isInCircle && CB >= 0 && CD <= 0;

    printf("Is the point in the colored area?\n %d", isInColored ? "Yes" : "No");
    return 0;
}