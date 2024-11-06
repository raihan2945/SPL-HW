#include <stdio.h>

int main() {
    int hours, minutes, seconds;

    printf("Enter the number of hours: ");
    scanf("%d", &hours);

    minutes = hours * 60;
    seconds = hours * 3600;

    printf("Minutes: %d minutes\n", minutes);
    printf("Seconds: %d seconds\n", seconds);

    return 0;
}
