<<<<<<< HEAD
#include <stdio.h>
int main() {
    int a, b, result;
    char op;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &op);   // space before %c to ignore newline
    printf("Enter second number: ");
    scanf("%d", &b);
    switch (op) {
        case '+':
            result = a + b;
            printf("Result = %d\n", result);
            break;
        case '-':
            result = a - b;
            printf("Result = %d\n", result);
            break;
        case '*':
            result = a * b;
            printf("Result = %d\n", result);
            break;
        case '/':
            if (b != 0)
                printf("Result = %d\n", a / b);
            else
                printf(" Division by zero is not allowed.\n");
            break;
        case '%':
            if (b != 0)
                printf("Result = %d\n", a % b);
            else
                printf(" Modulus by zero is not allowed.\n");
            break;
        default:
            printf("Invalid operator\n");
    }
    return 0;
}
=======
#include <stdio.h>
int main() {
    int a, b, result;
    char op;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &op);   // space before %c to ignore newline
    printf("Enter second number: ");
    scanf("%d", &b);
    switch (op) {
        case '+':
            result = a + b;
            printf("Result = %d\n", result);
            break;
        case '-':
            result = a - b;
            printf("Result = %d\n", result);
            break;
        case '*':
            result = a * b;
            printf("Result = %d\n", result);
            break;
        case '/':
            if (b != 0)
                printf("Result = %d\n", a / b);
            else
                printf(" Division by zero is not allowed.\n");
            break;
        case '%':
            if (b != 0)
                printf("Result = %d\n", a % b);
            else
                printf(" Modulus by zero is not allowed.\n");
            break;
        default:
            printf("Invalid operator\n");
    }
    return 0;
}
>>>>>>> 955887b0aa6e935bc9039484d7176dd3b52f4397
