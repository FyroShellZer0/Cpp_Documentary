#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
char customPassword(char name[], int number, char symbol[]);
void clearBuffer(void) {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}
int main() {
    //option 1
    // step 0: Generate random Uppercase
    // step1: Generate random letters
    // step2: Generate random numbers
    // step3: Generate random symbol
    // step4 : add all together

    // option 2
    //step 0: take input if the user wants to generate randomly or costumized
    //step 1: take input : name, number, symbol
    //step 2: pass it to a function that will return a strong generated password


    int choice = 0;
    char name[25] = "";
    int number = 0;
    int numberOfSymbol = 0;
    char *symbol = malloc((numberOfSymbol + 1) * sizeof(char)); //grab a memory while running
    printf("Strong Password Generator\n");
    printf("1. Randomized Password\n");
    printf("2. Costumized (enter your thoughts)\n");
    printf("Enter option: ");
    if(scanf(" %d", &choice) != 1) { // check for valid input
        printf("Invalid input. Exiting...\n");
        return 1;
    }
    clearBuffer();
    if (choice == 1) {
        //print randomized strong password
        printf("Random Password generated: ");
        
        
    }
    else if(choice == 2){
        // costumized
        printf("Enter a name (dog, person, place, etc.): ");
        fgets(name, sizeof(name), stdin);
        //name[strlen(name) - 1] = '\0';
        name[strcspn(name, "\n")] = '\0';

        printf("Enter a number: ");
        scanf(" %d", &number);
        
        printf("How many symbols do you wanna enter?: ");
        scanf(" %d", &numberOfSymbol);
        if(symbol == NULL) {
            printf("Memory Allocation failed\n");
            return 1;
        }
        for(int i = 0; i < numberOfSymbol; i++) {
            printf("Enter character #%d: ", i + 1);
            scanf(" %c", &symbol[i]);
        }
        symbol[numberOfSymbol] = '\0'; // Null-terminate the symbol string
        printf("name: %s\n", name);
        printf("number: %d\n", number); 
        for(int i = 0; i < numberOfSymbol; i++) {
            printf("symbol #%d: %c\n", i + 1, symbol[i]);
        }

        customPassword(name, number, symbol);
        free(symbol);
        symbol = NULL;
        
        
    }
    else {
        printf("Error\n");
        return 1;
    }

    return 0;
}
char randomPassword() {
    srand(time(NULL));

}
char customPassword(char name[], int number, char symbol[]) {
    char combined[256];
    // password should meet 16 characters
    srand(time(NULL));
    int numberOfLetter = 0;
    char letter = 'a' + numberOfLetter;
    sprintf(combined, "%s%d%s", name, number, symbol);
    if(strlen(combined) < 16) {
        
    }

}
