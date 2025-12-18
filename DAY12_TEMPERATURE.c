#include <stdio.h>

int main() {

    char choice = '\0';
    double fahrenheit = 0.0;
    double celsius = 0.0;

    printf("Temperature converter\n");

    printf("C. Celsius to Fahrenheit\n");
    printf("F. Fahrenheit to Celsius\n");
    printf("Enter choice (C/F): ");
    scanf("%c", &choice);

    if (choice == 'C') {
        //C TO F
        printf("Enter the temperature in celsius: ");
        scanf("%lf", &celsius);
        fahrenheit = (celsius * 9 / 5) + 32; // C TO F
        printf("%.2lf celsius is equal to %.2lf fahrenheit\n", celsius, fahrenheit);
    }   
    else if (choice == 'F') {
        //F TO C
        getchar();
        printf("Enter the temperature in fahrenheit: ");
        scanf("%lf", &fahrenheit);
        celsius = (fahrenheit - 32) * 5 / 9; //F TO C
        printf("%.2lf fahrenheit is equal to %.2lf celsius\n", fahrenheit, celsius);
    }
    else {
        printf("Invalid choice!\n");
    }
    return 0;
}