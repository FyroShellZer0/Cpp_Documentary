#include <stdio.h>

int main() {


    int number = 0;
    do { // do this first then go check the while condition at the end
        printf("1.Enter a number greater than 0: ");
        scanf("%d", &number);
    }while (number <= 0);
    

    //SO IF THE NUMBER IS 1 WHICH IS ALREADY GREATER THAN 0, IT WILL STILL DO THE DO BECAUSE IT WILL BE EXECUTED BEFORE IT CHECKS CONDITION
    int number = 1;
    do { // do this first then go check the while condition at the end
        printf("2.Enter a number greater than 0: ");
        scanf("%d", &number);
    }while (number <= 0);
    //IT WILL STILL RUN THE DO 
    return 0;
}