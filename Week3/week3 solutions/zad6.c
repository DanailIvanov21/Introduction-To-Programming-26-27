#include <stdio.h>

int main() {
    char c;
    if (scanf(" %c", &c) != 1) return 0;


    // Проверяваме дали символът е буква
    //Добра практика е винаги да ползваме самите символи, когато работим с char тъй като
    //при различните архитектури
    //цифовите стойности не винаги отговарят на символа в АSCII.

    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
        // Обръщане на капитализацията чрез символни разлики вместо числа
        char flipped = (c >= 'a' && c <= 'z') ? (c - ('a' - 'A')) : (c + ('a' - 'A'));
        printf("%c\n", flipped);

        // Преобразуваме към малка буква за лесна проверка на гласна/съгласна
        char lower = (c >= 'A' && c <= 'Z') ? (c + ('a' - 'A')) : c;

        if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') {
            printf("Vowel\n");
        } else {
            printf("Consonant\n");
        }
    } else {
        printf("Invalid character\n");
    }

    return 0;
}