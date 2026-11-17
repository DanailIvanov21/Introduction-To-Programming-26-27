include <stdio.h>

unsigned removeMiddle(unsigned num)// функция за премахване на средните цифри
{
    unsigned reversed = 0; // променлива, в която ще пазим обърнатото число
    unsigned temp = num;// променлива върху която ще обработваме числото
    unsigned digits = 0; // брояч - колко цифри е числото

    // Обръщаме числото и броим цифрите
    while (temp > 0)
    {
        reversed = reversed * 10 + temp % 10;
        temp /= 10;
        digits++;
    }

    unsigned skip1, skip2;// две променливи за всяко пропуснато число по индекс започващо от 1

    if (digits % 2 == 0)// ако е четен брой цифри числото махаме 2
    {
        skip1 = digits / 2; // средното
        skip2 = skip1 + 1;// и следващото
    }
    else // ако не е четно махаме само средното
    {
        skip1 = (digits + 1) / 2;
        skip2 = skip1;// записваме същото число
    }

    unsigned newNumber = 0; // променлива на новото крайното число
    unsigned position = 1; // индекса 

    temp = reversed; // присвояваме обърнатото число на променливата за обработка на число

    // Създаваме новото число без средните цифри
    while (temp > 0)
    {
        unsigned digit = temp % 10;// взимаме последната цифра 

        if (position != skip1 && position != skip2)// ако не са тези индекси добави цифрата отзад напред
        {
            newNumber = newNumber * 10 + digit; // числото по 1 плюс последната цифра
        }

        temp /= 10; //махаме последната цифра
        position++; // плюс 1 на индекса
    }

    return newNumber; // връщаме новото число
}

int main()
{
    unsigned num;

    scanf("%u", &num);

    unsigned result = removeMiddle(num); // записваме новото число получено от функцията.

    printf("%u %u", result, result + 1);//принтираме числото и следващото

    return 0;
}
