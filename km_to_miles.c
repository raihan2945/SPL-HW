#include <stdio.h>

int main() {
    float kilometers, miles;

    printf("Enter the kilometers: ");
    scanf("%f", &kilometers);

    miles = kilometers * 0.621371;

    printf("Miles is: %.2f\n", miles);

    return 0;
}
