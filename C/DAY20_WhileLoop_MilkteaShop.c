#include <stdio.h>

int main() {
    int entrance = 0;
    double sixteenOZ = 5.9;
    double twentytwoOZ = 6.0;
    int milkTeaChoice = 0;
    int size = 0;
    double money = 15.2;
    double remainingMoney = 0.0;
    printf("Welcome to Milk&Tea!\n");

    do {
        printf("1. Buy\n2. See money\n3. Exit\n");
        printf("Enter choice: ");
        scanf(" %d", &entrance);
        if (entrance == 1) {
            printf("Flavors: \n");
            printf("1. Cookies 'n Cream\n2. Winter melon\n3. Matcha\n4. Red Velvet\n");
            printf("Enter flavor: ");
            scanf(" %d", &milkTeaChoice);
            
            switch(milkTeaChoice) {
                case 1:
                    printf("1. $%.2lf 16oz\n2. $%.2lf 22oz\n", sixteenOZ, twentytwoOZ);
                    printf("Enter size: ");
                    scanf(" %d", &size);
                    if (size == 1) {
                        money -= sixteenOZ;
                        printf("-%.2lf in money %.2lf\nRemaining money: %.2lf\n", sixteenOZ, money, money);
                        printf("16oz of Cookies 'n Cream in comming...\n");
                        printf("Thanks for the order,Enjoy!\n");
                        
                    }
                    else if (size == 2) {
                        money -= twentytwoOZ;
                        printf("-$%.2lf in money $%.2lf\nRemaining money: $%.2lf\n", twentytwoOZ, money, money);
                        printf("22oz of Cookies 'n Cream in comming...\n");
                        printf("Thanks for the order,Enjoy!\n");

                    }
                    break;
                    //WINTERMELON
                case 2:
                    printf("1. 16oz\n2. 22oz\n");
                    printf("Enter size: ");
                    scanf(" %d", &size);
                    if (size == 1) {
                        money -= sixteenOZ;
                        printf("-$%.2lf in money $%.2lf\nRemaining money: $%.2lf\n", sixteenOZ, money, money);
                        printf("16oz of Winter melon in comming...\n");
                        printf("Thanks for the order,Enjoy!\n");
                        
                    }
                    else if (size == 2) {
                        money -= twentytwoOZ;
                        printf("-$%.2lf in money $%.2lf\nRemaining money: 4%.2lf\n", twentytwoOZ, money, money);
                        printf("22oz of Winter melon in comming...\n");
                        printf("Thanks for the order,Enjoy!\n");

                    }
                    break;
                //MATCHA
                case 3:
                    printf("1. 16oz\n2. 22oz\n");
                    printf("Enter size: ");
                    scanf(" %d", &size);
                    if (size == 1) {
                        money -= sixteenOZ;
                        printf("-$%.2lf in money $%.2lf\nRemaining money: $%.2lf\n", sixteenOZ, money, money);
                        printf("16oz of Matcha in comming...\n");
                        printf("Thanks for the order,Enjoy!\n");
                        
                    }
                    else if (size == 2) {
                        money -= twentytwoOZ;
                        printf("-$%.2lf in money $%.2lf\nRemaining money: $%.2lf\n", twentytwoOZ, money, money);
                        printf("22oz of Matcha in comming...\n");
                        printf("Thanks for the order,Enjoy!\n");

                    }
                    break;
                //RED VELVET
                case 4:
                    printf("1. 16oz\n2. 22oz\n");
                    printf("Enter size: ");
                    scanf(" %d", &size);
                    if (size == 1) {
                        money -= sixteenOZ;
                        printf("-$%.2lf in money $%.2lf\nRemaining money: $%.2lf\n", sixteenOZ, money, money);
                        printf("16oz of Red velvet in comming...\n");
                        printf("Thanks for the order,Enjoy!\n");
                        
                    }
                    else if (size == 2) {
                        money -= twentytwoOZ;
                        printf("-$%.2lf in money $%.2lf\nRemaining money: $%.2lf\n", twentytwoOZ, money, money);
                        printf("22oz of Red velvet in comming...\n");
                        printf("Thanks for the order,Enjoy!\n");

                    }
                    break;
                default:
                    printf("Invalid choice..");
                    break;
            }
        }
        else if(entrance == 2) {
            printf("Remaining money: $%.2lf\n", money);
        }
    
    }while (entrance != 3);
    printf("Exiting....");
    return 0;
}