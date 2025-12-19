#include <stdio.h>
#include <math.h>
int main() {
    double principal = 0.0; 
    double rate = 0.0;
    int years = 0;
    int times = 0.0;
    double maturityValue = 0.0;

    printf("Compound Interest Calculator\n");

    printf("Enter Principal: ");
    scanf("%lf", &principal);
     printf("Enter Rate: ");
    scanf("%lf", &rate);
    rate = rate/100; //10 = 10/100 = 0.1

    printf("How many years: ");
    scanf("%d", &years);

    printf("Enter how many times compounded: "); 
    scanf("%d", &times);
    maturityValue = principal * pow(1 + rate/times,times * years);
    printf("%.3lf", maturityValue);
    

    return 0;
}
