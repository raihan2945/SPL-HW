#include <stdio.h>

int main() {
    float num1, num2;
    float addition, subtraction, multiplication, division;

    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter the second number: ");
    scanf("%f", &num2);

    addition = num1 + num2;
    subtraction = num1 - num2;
    multiplication = num1 * num2;

    if (num2 != 0) {
        division = num1 / num2;
    } else {
        printf("Division by zero is not allowed.\n");
    }

    printf("Addition: %.2f\n", addition);
    printf("Subtraction: %.2f\n", subtraction);
    printf("Multiplication: %.2f\n", multiplication);

    if (num2 != 0) {
        printf("Division: %.2f\n", division);
    }

    return 0;
}
