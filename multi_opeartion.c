#include <stdio.h>

int main() {
    float num1, num2;
    float add, sub, multi, div;

    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter the second number: ");
    scanf("%f", &num2);

    add = num1 + num2;
    sub = num1 - num2;
    multi = num1 * num2;

    if (num2 != 0) {
        div = num1 / num2;
    } else {
        printf("Division by zero is not allowed.\n");
    }

    printf("Addition: %.2f\n", add);
    printf("Subtraction: %.2f\n", sub);
    printf("Multiplication: %.2f\n", multi);

    if (num2 != 0) {
        printf("Division: %.2f\n", div);
    }

    return 0;
}
