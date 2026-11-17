
#include <stdio.h>

int main()
{
    unsigned K, N, M;
    scanf("%u %u %u", &K, &N, &M);

    for (unsigned current = N; current <= M; current++)
    {
        unsigned temp = current;// правим нова променлив, за да обхождаме числото в нея
        int isSpecial = 1;// като булев флаг дали числото е специално или не 

        while (temp > 0)
        {
            unsigned digit = temp % 10;// взимаме последната цифра от числото

            if (digit == 0 || K % digit != 0)// проверяваме дали се дели на К или е различно от 0
            {
                isSpecial = 0; // ако не се дели на К значи не е специално числото
                break;
            }

            temp /= 10; // махаме последната цифра от числото
        }

        if (isSpecial == 1) // ако е специално го принтираме,а ако не е го пропускаме
        {
            printf("%u ", current);
        }
    }

    return 0;
}
