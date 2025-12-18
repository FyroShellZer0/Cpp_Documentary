#include <stdio.h>
#include <math.h>

int main() {
    double total = 0.0;
    double principal = 0.0;
    double interest = 0.0;
    double rate = 0.0;
    double convertedrate = 0.0;
    double time = 0.0;
    double convertedtime = 0.0;

    int choice = 0;
    int timeChoice = 0;
    double year = 0; double month = 0;
     printf("Simple Interest Calculator\n");
    printf("1. Find interest\n");
    printf("3. Find principal\n");
    printf("2. Find rate\n");
    printf("4. Find time\n");
    printf("Enter choice: ");
    scanf("%d", &choice);
    getchar();
    switch (choice) {
        case 1:
            printf("Enter principal: ");
            scanf("%lf", &principal);
            printf("principal: %.3lf\n", principal);
            getchar();

            printf("Enter rate: ");
            scanf("%lf", &rate);
            convertedrate = rate / 100;
            printf("rate: %.3lf\n", convertedrate);

            getchar();
            printf("1. years\n");
            printf("2. months\n");
            printf("3. years and months\n");
            printf("Enter choice: ");
            scanf("%d", &timeChoice);
                switch(timeChoice) {
                    case 1:
                        printf("Enter years: ");
                        scanf("%lf", &year);
                        time = year;
                        printf("%.2lf", time);
                        break;
                    case 2:
                        printf("Enter months: ");
                        scanf("%lf", &month);
                        time = month / 12;
                        printf("%.2lf", time);
                        break;
                    case 3:
                        printf("Enter Years: ");
                        scanf("%lf", &year);
                        printf("Enter months: ");
                        scanf("%lf", &month);
                        //convertedtime = month / 12;
                        //time = year + convertedtime;
                        time = year + (month / 12);
                        printf("%.2lf", time);
                        break;
                }
                total = principal * convertedrate * time;
                printf("\n%.2lf * %.2lf * %.2lf\n", principal, convertedrate, time);
                printf("Interest: %.2lf", total);
                break;
        case 2:
        // PRINCIPAL
            printf("Enter interest: ");
            scanf("%lf", &interest);
            
            getchar();
            printf("Enter rate: ");
            scanf("%lf", &rate);
            convertedrate = rate / 100;
            printf("rate: %.2lf\n", convertedrate);

            getchar();
            printf("1. years\n");
            printf("2. months\n");
            printf("3. years and months\n");
            printf("Enter choice: ");
            scanf("%d", &timeChoice);
                switch(timeChoice) {
                    case 1:
                        printf("Enter years: ");
                        scanf("%lf", &year);
                        time = year;
                        printf("%.2lf", time);
                        break;
                    case 2:
                        printf("Enter months: ");
                        scanf("%lf", &month);
                        time = month / 12;
                        printf("%.2lf", time);
                        break;
                    case 3:
                        printf("Enter Years: ");
                        scanf("%lf", &year);
                        printf("Enter months: ");
                        scanf("%lf", &month);
                        //convertedtime = month / 12;
                        //time = year + convertedtime;
                        time = year + (month / 12);
                        printf("%.2lf", time);
                        break;
                }
                printf("%.2lf / %.2lf * %.2lf\n", interest, convertedrate, time);
                total = interest / (convertedrate * time);
                printf("\nPrincipal: %.2lf\n", total);
            break;
        case 3:
            //rate
            printf("Enter interest: ");
            scanf("%lf", &interest);
            
            printf("Enter principal: ");
            scanf("%lf", &principal);
            printf("principal: %.3lf\n", principal);
            getchar();

            getchar();
            printf("1. years\n");
            printf("2. months\n");
            printf("3. years and months\n");
            printf("Enter choice: ");
            scanf("%d", &timeChoice);
                switch(timeChoice) {
                    case 1:
                        printf("Enter years: ");
                        scanf("%lf", &year);
                        time = year;
                        printf("%.2lf", time);
                        break;
                    case 2:
                        printf("Enter months: ");
                        scanf("%lf", &month);
                        time = month / 12;
                        printf("%.2lf", time);
                        break;
                    case 3:
                        printf("Enter Years: ");
                        scanf("%lf", &year);
                        printf("Enter months: ");
                        scanf("%lf", &month);
                        //convertedtime = month / 12;
                        //time = year + convertedtime;
                        time = year + (month / 12); // mdas
                        printf("%.2lf", time);
                        break;
                }
                printf("%.2lf / %.2lf * %.2lf \n" , interest, principal, time);
                total = interest / (principal * time);
                printf("rate : %.1lf percent", total);
            break;
        
        case 4:
            //time
            printf("Enter interest: ");
            scanf("%lf", &interest);
            
            printf("Enter principal: ");
            scanf("%lf", &principal);
            printf("principal: %.3lf\n", principal);
            getchar();

            getchar();
            printf("Enter rate: ");
            scanf("%lf", &rate);
            convertedrate = rate / 100;
            printf("rate: %.2lf\n", convertedrate);
            total = interest / (principal * convertedrate);
            printf("%.2lf / %.2lf * %.2lf \n", interest, principal, convertedrate);
            printf("Time: %.2lf\n", total);
            break;

    }
    return 0;
}
