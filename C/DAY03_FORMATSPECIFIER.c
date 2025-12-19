#include <stdio.h>

int main() {
    /*
    Format specifier = special tokens that begin with a % symbol,
    followed by a character that specifies the data type and optional modifiers(width, precision, flags).
    They control how data is displayed or interpreted
    */

    int age = 16;
    float price = 49.99;
    double pi = 3.1415926535;
    char currency = '$';
    char name[] = "jen";
    
    // Basic format specifiers
    printf("%d\n", age);    // %d = integer (decimal)
    printf("%f\n", price);  // %f = float (default 6 decimals)
    printf("%lf\n", pi);    // %lf = double
    printf("%c\n", currency); // %c = character
    printf("%s\n\n\n", name); // %s = string

    //---------------- WIDTH ----------------
    int num1 = 5;
    int num2 = 50;
    int num3 = 500;

    printf("%5d\n", num1); // width = 5, right-aligned (default)
    printf("%5d\n", num2); // width = 5
    printf("%5d\n", num3); // width = 5

    //---------------- FLAG (- for left-align) ----------------
    int num4 = 5;
    int num5 = 50;
    int num6 = 500;

    printf("\n%-3d\n", num4); // flag: -, width = 3 → left-aligned
    printf("%-3d\n", num5);   // flag: -, width = 3
    printf("%-3d\n", num6);   // flag: -, width = 3

    //---------------- FLAG (0 for zero-padding) ----------------
    int num7 = 5;
    int num8 = 50;
    int num9 = 500;

    printf("\n%05d\n", num7); // flag: 0, width = 5 → zero-padded
    printf("%05d\n", num8);   // flag: 0, width = 5
    printf("%05d\n", num9);   // flag: 0, width = 5

    //---------------- PRECISION ----------------
    float price1 = 9.991;
    float price2 = 12.50;
    float price3 = -199.00;

    printf("\n$%.2f\n", price1); // precision = .2 → 2 decimal places
    printf("$%.2f\n", price2);   // precision = .2
    printf("$%.2f\n", price3);   // precision = .2

    //---------------- FLAGS + WIDTH + PRECISION ----------------
    float price4 = 9.991;
    float price5 = 12.50;
    float price6 = -199.00;

    printf("\n$%+7.2f\n", price4); // flag: + (always show sign), width = 7, precision = 2
    printf("$%+7.2f\n", price5);   // flag: +, width = 7, precision = 2
    printf("$%+7.2f\n", price6);   // flag: +, width = 7, precision = 2

    return 0;
}
