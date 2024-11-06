#include <stdio.h>

int main() {
    int num1, num2, remainder;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    if (num2 != 0) {
        remainder = num1 % num2;  // Calculate the remainder
        printf("The remainder when %d is divided by %d is: %d\n", num1, num2, remainder);
    } else {
        printf("Division by zero is not allowed.\n");
    }

    return 0;
}
