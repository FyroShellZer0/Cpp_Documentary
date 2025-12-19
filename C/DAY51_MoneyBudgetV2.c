#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <string.h>
void trackProgress(const char *moneyBudget);
void moneyBudget(double money);
int main() {
    // add another option in choice
    // sum the savings & emergency fund
    // sum how many days ive been budgeting
    int choice;
    double money;
    printf("Plant your Future!\n");
    
    do {
        printf("\n\n1. Budget Your money\n");
        printf("2. Track your progress\n");
        printf("3. exit\n");
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
        }else if(choice == 2) {
            printf("Progress: \n");
            trackProgress("MoneyBudget.log");
        }
        else if(choice == 3) {
            printf("Exiting");
            for(int i = 0; i < 3; i++) {
                printf(".");
                fflush(stdout);
                sleep(1);
            }
            printf("Goodbye!\n");
            break;
        }
        else {
            printf("Incorrect choice, please enter 1, 2 or 3\n");
            return 1;
        }
    }while (choice != 3);

    return 0;
}
void trackProgress(const char *MoneyBudget) {
    FILE *file = fopen(MoneyBudget, "r");
    if (!file) {
        printf("Can't open file\n");
        return;
    }
    char line[100];
    double totalSavings = 0.0;
    double totalEmergencyFunds = 0.0;
    int days = 0;
    while(fgets(line, sizeof(line),file)){
        double value;
        if(strstr(line, "time: ")){
            days++;
        }
        if(strstr(line, "Savings:")){
            sscanf(line, "Savings: ₱%lf", &value);
            totalSavings += value;
        }
        if(strstr(line, "Emergency Fund:")){
            sscanf(line, "Emergency Fund: ₱%lf", &value);
            totalEmergencyFunds += value;
        }
    }
    fclose(file);
    file = NULL;
    printf("\n=== Savings Summary ===\n");
    printf("Days: %d\n", days);
    printf("Total Savings Recorded: ₱%.2lf\n", totalSavings);
    printf("Total Emergency Funds Recorded: ₱%.2lf\n", totalEmergencyFunds);
    printf("Total savings: %.2lf\n\n", totalSavings + totalEmergencyFunds);
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

