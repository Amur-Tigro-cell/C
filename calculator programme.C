#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;
    
    printf("\nEnter an operator (+ - * /): ");
    scanf(" %c", &operator);  
    printf("Enter number1: ");
    scanf("%lf", &num1);
    printf("Enter number2: ");
    scanf("%lf", &num2);
    
    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("\nResult: %lf\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("\nResult: %lf\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("\nResult: %lf\n", result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("\nResult: %lf\n", result);
            } else {
                printf("\nError: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("\n%c is not a valid operator.\n", operator);
    }

    return 0;
}
