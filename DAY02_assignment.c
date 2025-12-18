#include <stdio.h>
#include <stdbool.h>
int main() {
    /*
    ASSIGNMENT FROM DAY 1!!!
    print:
    1.int
    2.float
    3.double
    4.char
    5.array
    6.bool
    */

    //int
    int proteinIntake = 90;
    printf("you need %d\n", proteinIntake); 

    int age = 16;
    printf("\nyou are %d\n", age);

    int quantity = 2;
    printf("\nyou bought %d steaks\n", quantity);

    //float 
    float steakPrice = 49.90; 
    printf("\nthe steaks price is $%.2f\n", steakPrice);

    float shoesPrice = 85.5;
    printf("\nthe shoes price is $%.1f\n", shoesPrice);

    float monitorPrice = 419.7;
    printf("\nthe monitor's price is $%.1f\n", monitorPrice);

    //double
    double number = 90.0000000000056;
    printf("\nthe number is %.17lf\n", number);

    //char
    char luckyNumber = '8';
    printf("\nthe lucky number is %c\n", luckyNumber);

    char symbol = '$';
    printf("\nyour favorite symbol is %c\n", symbol);

    char letter = 'J';
    printf("\nyour letter is %c\n", letter);

    //array
    char favDrink[] = "buko";
    printf("\nyour favorite drink is %s\n", favDrink);

    char favFood[] = "tinola";
    printf("\nyour favorite food is %s\n", favFood);

    char favCar[] = "Porche gt 911";
    printf("\nyour favorite car is %s\n", favCar);

    //bool
    bool isOnline = true;
    if (isOnline){
        printf("\nYou are online!  welcome back/n");
    }
    else{
        printf("\nyou are offline\n");
    }
    bool bios = false;
    if (bios) {
        printf("\nBIOS is set up correctly,proceeding to boot!\n");
    }
    else {
        printf("\nBIOS is NOT set up correctly,going back to BIOS set up.\n");
    }
    bool money = false;
    if (money) {
        printf("\nYou have money!!!!\n");
    }
    else {
        printf("\nYou dont have money!!!!!\n");
    }
    return 0;
}
