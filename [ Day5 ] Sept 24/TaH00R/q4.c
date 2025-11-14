#include <stdio.h>

int main() {
    float num1, num2, result;
    char op;
    printf("Enter calculation (<number1> <operator> <number2>): ");
    scanf("%f %c %f", &num1, &op, &num2);

    switch (op) {
        case '+':
            result = num1 + num2;
            printf("Result: %.2f\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %.2f\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %.2f\n", result);
            break;
        case '/':
            if (num2 == 0)
                printf("Error: Division by zero!\n");
            else {
                result = num1/num2;
                printf("Result: %.2f\n", result);
            }
            break;
        default:
            printf("Invalid operator!\n");
    }
    return 0;
}