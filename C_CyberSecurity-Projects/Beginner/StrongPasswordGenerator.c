#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define UPPERCASE "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
#define LOWERCASE "abcdefghijklmnopqrstuvwxyz"
#define DIGITS "0123456789"
#define SYMBOLS "!@#$%^&*()_+-=[]{};':\"<>,.?/"
#define ALL_CHARS UPPERCASE LOWERCASE DIGITS SYMBOLS
#define PASSWORD_LENGTH 16
char randomPassword();
char customPassword(char name[], int number, char symbol[]);
void clearBuffer(void) {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}
int main() {
    srand(time(NULL)); 
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
        randomPassword();
        
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
    
    printf("Generating password...\n");
    printf("Password: ");
    for (int i = 0; i < PASSWORD_LENGTH; i++) {
        // Select a random character from the combined set
        int index = rand() % strlen(ALL_CHARS);
        printf("%c", ALL_CHARS[index]);
    }
    printf("\n");


}
char customPassword(char name[], int number, char symbol[]) {
    char combined[256];
    // password should meet 16 characters
    int numberOfLetter = 0;
    char letter = 'a' + numberOfLetter;
    sprintf(combined, "%s%d%s", name, number, symbol);
    int index;
    int len = strlen(combined);
    while(strlen(combined) < PASSWORD_LENGTH){
           // current length
        int index = rand() % strlen(ALL_CHARS);   // random index
        combined[len] = ALL_CHARS[index];   // append 1 char
        combined[len + 1] = '\0';   // keep string valid
    }
    int randomIndex = rand() % len;
    combined[randomIndex] = toupper(combined[randomIndex]);
    printf("Generated password: %s\n", combined);
        
}

