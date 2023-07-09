#include <stdio.h>

int main()
{
    int num1, num2;
    char operator;

    printf("Enter two numbers:");
    scanf("%d %d", &num1, &num2);
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    int result;
    switch (operator)
    { 
        case '+':
        result = num1 + num2;
        break;
        case '-':
        result = num1 - num2;
        break;
        case '*':
        result = num1 * num2;
        break;
        case '/':
        if (num2 !=0)
        result = num1 / num2;
        else 
        {
            printf("Error: Division by zero\n");
            return 1;
        }
        break;
        default:
        printf("Invalid Operator\n");
        return 1;
    }
    printf("Result: %d\n", result);
    return 0;
}