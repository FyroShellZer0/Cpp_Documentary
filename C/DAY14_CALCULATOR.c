#include <stdio.h>

int main() {
    double num1 = 0.0;
    double num2 = 0.0;
    double total = 0.0;
    char operator = '\0';

    printf("Enter first number: ");
    scanf("%lf", &num1);
    getchar();
    printf("(+) = addition\n");
    printf("(-) = subtraction\n");
    printf("(*) = multiplication\n");
    printf("(/) = division\n");
    printf("Choose an operator: ");
    scanf("%c", &operator);

    getchar();
    printf("Enter second number: ");
    scanf("%lf", &num2);
    getchar();
    switch (operator) {
        case '+':
            total = num1 + num2;
            printf("%.2lf + %.2lf = %.2lf", num1, num2, total);
            break;
        case '-':
            total = num1 - num2;
            printf("%.2lf - %.2lf = %.2lf", num1, num2, total);
            break;
        case '*':
            total = num1 * num2;
            printf("%.2lf * %.2lf = %.2lf", num1, num2, total);
            break;
        case '/':
            if (num2 != 0) {
                total = num1 / num2;
                printf("%.2lf / %.2lf = %.2lf", num1, num2, total);
                break;
            }
            else {
                printf("error");
                break;
            }
        default:
            printf("INVALID OPERATOR CHOICE!");
    }
    


    return 0;
}