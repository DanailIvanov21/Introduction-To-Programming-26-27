#include <stdio.h>

int main()
{

    int a;
    double b;
    float c;
    short d;
    long int e;
    long long int f;
    unsigned g;

    printf("The sizes in bytes are: %u, %u, %u, %u, %u, %u, %u", sizeof(a), sizeof(b),sizeof(c),
           sizeof(d),sizeof(e),sizeof(f),sizeof(g));

//В printf изполваме спецификаторите за unsigned int, защото опреторът sizeof ни връща цяло положително число.
    return 0;
}