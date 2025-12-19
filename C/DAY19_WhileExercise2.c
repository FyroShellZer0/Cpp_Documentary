#include <stdio.h>
#include <stdbool.h>
int main() {

    bool isRunning = true;
    char response = '\0';
    
    while (isRunning) {
        printf("You are playing a game\n");
        printf("Would you like to continue? (y = yes, n = no): ");
        scanf(" %c", &response);

        //if (response != 'Y' && 'y') compiler reads the 'y' as a character | if ( (true or false) && 121 ) |
        //so we should call the variable again
        if (response != 'Y' && response !='y') { 
            isRunning = false;
        }
    }
    
    printf("You exit the game");
    return 0;
}