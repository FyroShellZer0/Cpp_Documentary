#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <string.h>

// ANSI color codes
#define RESET "\033[0m"
#define GREEN "\033[1;32m"
#define CYAN "\033[1;36m"
#define YELLOW "\033[1;33m"
#define RED "\033[1;31m"
#define BLUE "\033[1;34m"

void trackProgress(const char *moneyBudget);
void moneyBudget(double money);

void printHeader() {
    printf(BLUE "===============================================\n" RESET);
    printf(GREEN "             🌱 Plant Your Future! 🌱\n" RESET);
    printf(BLUE "===============================================\n\n" RESET);
}

int main() {
    int choice;
    double money;

    printHeader();

    do {
        printf(CYAN "┌────────────────────────────┐\n" RESET);
        printf(CYAN "│ 1. Budget Your Money       │\n" RESET);
        printf(CYAN "│ 2. Track Your Progress     │\n" RESET);
        printf(CYAN "│ 3. Exit                    │\n" RESET);
        printf(CYAN "└────────────────────────────┘\n" RESET);
        printf(YELLOW "Enter choice: " RESET);
        scanf(" %d", &choice);

        if(choice == 1){
            printf(YELLOW "Enter money: ₱" RESET);
            scanf("%lf", &money);
            if (money <= 0) {
                printf(RED "⚠ You are broke. Try again!\n" RESET);
                continue;
            }
            moneyBudget(money);

        } else if(choice == 2) {
            printf(GREEN "\n📊 Your Progress: \n" RESET);
            trackProgress("/home/raiujen/Desktop/MoneyBudget.log");

        } else if(choice == 3) {
            printf(GREEN "Exiting" RESET);
            for(int i = 0; i < 3; i++) {
                printf(".");
                fflush(stdout);
                sleep(1);
            }
            printf("\nGoodbye! 🌟\n");
            break;

        } else {
            printf(RED "Invalid choice! Please enter 1, 2, or 3.\n" RESET);
        }

    } while (choice != 3);

    return 0;
}

void trackProgress(const char *MoneyBudget) {
    FILE *file = fopen(MoneyBudget, "r");
    if (!file) {
        printf(RED "⚠ Cannot open log file. No records yet!\n" RESET);
        return;
    }

    char line[150];
    double totalSavings = 0.0;
    double totalEmergencyFunds = 0.0;
    int days = 0;

    while(fgets(line, sizeof(line), file)) {
        double value;

        if(strstr(line, "time: "))
            days++;

        if(strstr(line, "Savings:"))
            sscanf(line, "Savings: ₱%lf", &value), totalSavings += value;

        if(strstr(line, "Emergency Fund:"))
            sscanf(line, "Emergency Fund: ₱%lf", &value), totalEmergencyFunds += value;
    }
    fclose(file);

    printf(YELLOW "\n=== Savings Summary ===\n" RESET);
    printf("Days logged:        %d\n", days);
    printf("Total Savings:      ₱%.2lf\n", totalSavings);
    printf("Emergency Funds:    ₱%.2lf\n", totalEmergencyFunds);
    printf(GREEN "Overall Total:      ₱%.2lf\n\n" RESET, totalSavings + totalEmergencyFunds);
}

void moneyBudget(double money) {
    double necessities = money * 0.50;
    double wants = money * 0.30;
    double savings = money * 0.10;
    double emergencyFund = money * 0.10;

    time_t now = time(NULL);
    char *timeString = ctime(&now);

    printf("\n📅 %s", timeString);
    printf(GREEN "--- Budget Breakdown (50/30/10/10 Rule) ---\n" RESET);
    printf("Necessities (50%%):     ₱%.2lf\n", necessities);
    printf("Wants (30%%):           ₱%.2lf\n", wants);
    printf("Savings (10%%):         ₱%.2lf\n", savings);
    printf("Emergency Fund (10%%):  ₱%.2lf\n", emergencyFund);
    printf(BLUE "------------------------------------------\n" RESET);
    printf("Total: ₱%.2lf\n", money);

    FILE *log = fopen("/home/raiujen/Desktop/MoneyBudget.log", "a");
    if (!log) {
        printf(RED "Error: Cannot open log file!\n" RESET);
        return;
    }

    fprintf(log, "time: %sNecessities: ₱%.2lf\nWants: ₱%.2lf\nSavings: ₱%.2lf\nEmergency Fund: ₱%.2lf\nTotal: ₱%.2lf\n\n",
            timeString, necessities, wants, savings, emergencyFund, money);
    fclose(log);

    printf(YELLOW "\nSaving progress" RESET);
    for(int i = 0; i < 3; i++) {
        printf(".");
        fflush(stdout);
        usleep(400000);
    }
    printf(GREEN "\nLogged successfully! 🌟\n" RESET);
}
