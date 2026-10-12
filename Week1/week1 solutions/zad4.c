#include <stdio.h>

int main() {

    long long int total_seconds;

    scanf("%lld", &total_seconds);

    // Пресмятане на дни, часове, минути и секунди
    long long int days = total_seconds / (24 * 3600);
    long long int remaining_seconds = total_seconds % (24 * 3600);

    long long int hours = remaining_seconds / 3600;
    remaining_seconds %= 3600;

    long long int minutes = remaining_seconds / 60;
    long long int seconds = remaining_seconds % 60;



    return 0;
}