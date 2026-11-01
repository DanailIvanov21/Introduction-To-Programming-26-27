#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n == 0) {
        printf("0, 1\n");
        return 0;
    }

    //Намираме дължината на числото
    int temp = n;
    int len = 0;
    while (temp > 0) {
        len++;
        temp /= 10;
    }

    int is_even = (len % 2 == 0);

    // Смятаме индексите, които да прескочим
    int skip_idx1, skip_idx2 = -1;

    skip_idx1 = len - 1 - (len / 2);
    skip_idx2 = len - (len / 2);


    int new_val = 0;
    int multiplier = 1;
    temp = n;
    int idx = 0;

    while (temp > 0) {
        int digit = temp % 10;

        // Проверяваме директно за индексите
        int skip = 0;
        if (is_even) {
            if (idx == skip_idx1 || idx == skip_idx2) {
                skip = 1;
            }
        } else {
            if (idx == skip_idx1) {
                skip = 1;
            }
        }

        if (!skip) {
            new_val = digit * multiplier + new_val;
            multiplier *= 10;
        }

        temp /= 10;
        idx++;
    }

    printf("%d, %d\n", new_val, new_val + 1);
    return 0;
}