#include <stdio.h>

int main() {
    char a1, a2, b1, b2, elem;
    scanf(" %c %c %c %c %c", &a1, &a2, &b1, &b2, &elem);

    // Граници за множество A
    char minA = (a1 < a2) ? a1 : a2;
    char maxA = (a1 > a2) ? a1 : a2;
    int inA = (elem >= minA && elem <= maxA);

    // Граници за множество B
    char minB = (b1 < b2) ? b1 : b2;
    char maxB = (b1 > b2) ? b1 : b2;
    int inB = (elem >= minB && elem <= maxB);

    // Операции с множествата (симетричната разлика е просто индиректно неравенство)
    //Даже тук е много удобно да използваме само логически изрази
    int unionAB = inA || inB;
    int intersect = inA && inB;
    int diff = inA && !inB;
    int onlyOne = (inA != inB);

    printf("%s, %s, %s, %s\n",
           unionAB ? "true" : "false",
           intersect ? "true" : "false",
           diff? "true" : "false",
           onlyOne ? "true" : "false");

    return 0;
}