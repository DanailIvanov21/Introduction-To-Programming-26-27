#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int even_num = 0;
    for (int i = 0; i < n; i++) {
        int d;
        scanf("%d", &d);
        if (d % 2 == 0) {
            even_num = even_num * 10 + d;
        }
    }

    printf("%d\n", even_num * 2);
    return 0;
}