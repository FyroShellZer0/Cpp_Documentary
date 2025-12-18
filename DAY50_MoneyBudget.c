#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
void moneyBudget(double money);
int main() {
    int choice;
    double money;
    printf("Plant your Future!\n");
    
    do {
        printf("\n\n1. Budget Your money\n");
        printf("2. exit\n");
        printf("Enter choice: ");
        scanf(" %d", &choice);
        if(choice == 1){
            printf("Enter money: ");
            scanf("%lf", &money);
            if (money <= 0) {
                printf("Youre broke\n");
                return 1;
            }
            moneyBudget(money);
        }else if(choice == 2){
            printf("Exiting");
            for(int i = 0; i < 3; i++) {
                printf(".");
                fflush(stdout);
                sleep(1);
            }
            printf("\nGoodbye!\n");
            exit(1);
        }else {
            printf("Incorrect choice, please enter 1 or 2\n");
            return 1;
        }
    }while (choice != 2);

    return 0;
}
void moneyBudget(double money) {
    // necessities = 50%
    // wants = 30%
    // savings = 10%
    // emergency fund = 10%
    double necessities = money/2;
    double wants = money *.30;
    double savings = money * .10;
    double emergencyFund = money * .10;
    time_t now;
    time(&now);
    char *timeString = ctime(&now);
    printf("\ntime: %s", timeString);
    printf("--- Budget Breakdown (50/30/10/10 Rule) ---\n");
    printf("Necessities (50%%)     : ₱%.2lf\n", necessities);
    printf("Wants (30%%)           : ₱%.2lf\n", wants);
    printf("Savings (10%%)         : ₱%.2lf\n", savings);
    printf("Emergency Fund (10%%)  : ₱%.2lf\n", emergencyFund);
    printf("------------------------------------------\n");
    printf("Total: ₱%.2lf\n", money);
    
    printf("\nRemember: Save consistently to secure your future.\n");
    
    FILE *log = fopen("MoneyBudget.log", "a");
    if (!log) {
        printf("Can't open file\n");
        return;
    }
    
    fprintf(log, "time: %sNecessities: ₱%.2lf\nWants: ₱%.2lf\nSavings: ₱%.2lf\nEmergency Fund: ₱%.2lf\nTotal: ₱%.2lf\n\n", timeString, necessities, wants, savings, emergencyFund, money);
    fclose(log);
    log = NULL;
    printf("Logged!\n");
    
}

