#include <stdio.h>

int main() {
    int choice = 0;
    double pounds = 0.0;
    double kilograms = 0.0;
    
    printf("Weight converstion calculator\n");
    printf("1.kilograms to pounds\n");
    printf("2.pounds to kilograms\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        //kg to lbs
        printf("Enter the weight in kilograms: ");
        scanf("%lf", &kilograms);
        pounds = kilograms * 2.20462;
        printf("%.3lf kilograms is equal to %.3lf pounds/lbs\n", kilograms, pounds);
    }
    else if (choice == 2) {
        //lbs to kg
        printf("Enter the weight in pounds: ");
        scanf("%lf", &pounds);
        kilograms = pounds / 2.20462;
        printf("%.3lf pounds is equal to %.3lf kilograms\n", pounds, kilograms);

    }
    else {
        printf("Invalid choice,please enter 1 or 2");
    }
    return 0;
}