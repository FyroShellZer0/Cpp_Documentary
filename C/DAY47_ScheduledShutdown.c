#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main(void) {
    int amount = 0;
    printf("Schedule shutdown\n");
    printf("30 = 30 minutes\n60 = 1 hour\n90 = 1 hour and 30 minutes\n");
    printf("Enter amount :");
    scanf(" %d", &amount);
    getchar();
    
    
    for (int i = amount; i > 0; i--) {
        if (i > 1){
            printf("System will shutdown in %d minutes\n", i);
            sleep(60);
        }else {
            printf("System will shutdown in %d minute\n", i);
            for (int i = 60; i > 0; i--){
                printf("%d seconds until shutdown\n", i);
                sleep(1);
            }
        }
        
        
    }
    printf("SHUTTNG DOWN\n");
    printf("Shutdown.");
    system("shutdown now");
    return 0;
}