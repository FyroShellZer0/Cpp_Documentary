#include <stdio.h>

void checkBalance(double balance);
double deposit();
double withdraw(double balance);
int main() {
    // user can check balance
    // deposit money
    //withdraw money
    //exit
    int choice = 0;
    double balance = 0.0;

    printf("----------WELCOME TO THE ATM---------\n");

    do {
        printf("Select an option:\n");
        printf("1. Check balance\n");
        printf("2. Deposit money\n");
        printf("3. Withdraw money\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf(" %d", &choice);

        switch(choice) {
            case 1:
                checkBalance(balance);
                break;
            case 2:
                balance += deposit();
                break;
            case 3:
                balance -= withdraw(balance);
                break;
            case 4:
                printf("Thank you for using the atm\n");
                break;
            default:
                printf("Invalid choice!\n");

        }

    }while (choice != 4);

    return 0;
}
void checkBalance(double balance){
   printf("\nYour current balance is : $%.2lf\n", balance);
}
double deposit(){
    double amount = 0.0;
    printf("\nHow much do you want to deposit: ");
    scanf(" %lf", &amount);

    if (amount < 0) {
        printf("Invalid amount\n");
        return 0;
    }
    else {
        printf("Successfully deposited $%.2lf\n", amount);
    }
    return amount;
}   
double withdraw(double balance){
    double amount = 0.0;
    printf("\nHow much do you want to withdraw: ");
    scanf(" %lf", &amount);

    if (amount < 0) { // no negative
        printf("Invalid amount!\n");
        return 0.0;
    }
    else if (amount > balance) {
        printf("Insufficient funds! your balance is $%.2lf", balance);
        return 0.0;
    }
    else {
        printf("Successfully widhdrew $%.2lf\n", amount);
        return amount;
    }
    return 0.0;
}