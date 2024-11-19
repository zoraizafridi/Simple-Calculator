#include <stdio.h>

int main() {
    char operation;
    double num1, num2, result;

    printf("Enter an operation (+, -, *, /): ");
    scanf(" %c", &operation);

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    switch (operation) {
        case '+':
            result = num1 + num2;
            printf("Result: %.2lf\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %.2lf\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %.2lf\n", result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result: %.2lf\n", result);
            } else {
                printf("Error: Division by zero!\n");
            }
            break;
        default:
            printf("Invalid operation!\n");
    }

    return 0;
}