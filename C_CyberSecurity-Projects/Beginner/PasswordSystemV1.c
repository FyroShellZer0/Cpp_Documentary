
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include <time.h>
#include <stdlib.h>

#define UPPERCASE "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
#define LOWERCASE "abcdefghijklmnopqrstuvwxyz"
#define DIGITS "0123456789"
#define SYMBOLS "!@#$%^&*()_+-=[]{};':\"<>,.?/"
#define ALL_CHARS UPPERCASE LOWERCASE DIGITS SYMBOLS
#define PASSWORD_LENGTH 16

//void Checker(bool(*isStrong)(char[]));
void Checker(char pass[]);
bool isLong(char pass[]);
bool hasSymbols(char pass[]);
bool hasNumbers(char pass[]);
bool hasUppercase(char pass[]);
void randomPassword(void);
char customPassword(char name[], int number, char symbol[]);
void clearBuffer(void) {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main() {
    int interfaceChoice = 0;
    do {
        
        printf("1. Check password\n");
        printf("2. Generate password (custom / random)\n");
        printf("Enter your choice: ");
        scanf(" %d", &interfaceChoice);
        clearBuffer();
        if (interfaceChoice == 1) {
            char password[50] = "";
            char *ptr = password;
            printf("\n******************\n");
            printf("Password Checker\n");
            printf("Enter password: ");
            fgets(password, sizeof(password), stdin);
            password[strlen(password) - 1] = '\0';
            Checker(password);
            printf("\n******************\n");
        }
        else if(interfaceChoice == 2) {
            srand(time(NULL)); 
            int choice = 0;
            char name[25] = "";
            int number = 0;
            int numberOfSymbol = 0;
            char *symbol = malloc((numberOfSymbol + 1) * sizeof(char)); //grab a memory while running
            printf("\n******************\n");
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
                printf("\n******************\n");
                //print randomized strong password
                printf("Random Password generated: ");
                randomPassword();
                printf("\n******************\n");
                
            }
            else if(choice == 2){
                printf("\n******************\n");
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
        }
        else if(interfaceChoice == 3){
            printf("Exiting...\n");
            return 0;
        }
        else {
            printf("Error, please enter 1, 2, or 3\n");
        }
        printf("\n******************\n");
    } while(interfaceChoice != 3);
    
    return 0;
}
void Checker(char pass[]){

    if (isLong(pass) && hasSymbols(pass) && hasNumbers(pass) && hasUppercase(pass)) {
        printf(" Overal: Strong!\n");
    }
    else {
        if (!isLong(pass)) {
            printf("Too short, 16 characters recommended.\n");
        }
        if (!hasSymbols(pass)) {
            printf("Please include Symbols!\n");
        }
        if (!hasNumbers(pass)) {
            printf("Please include numbers!\n");
        }
        if (!hasUppercase(pass)) {
            printf("Please include uppercases!\n");
        }
    }
}

bool isLong(char pass[]) {
    bool isLong = false;
    if(strlen(pass) >= 16) 
        return true;
    else return false;
}
bool hasSymbols(char pass[]) {
    bool hasSymbols = false;
    for (int i = 0; pass[i] != '\0'; i++) {
        char c = pass[i];
        if (!isalnum(c)) {
            return true;
        }
    }
    return false;
}
bool hasNumbers(char pass[]) {
    bool hasNumbers = false;
    for(int i = 0; pass[i] != '\0'; i++) {
        char c = pass[i];
        if(isdigit(c)){
            return true;
        }
    }
    return false;
}
bool hasUppercase(char pass[]) {
    bool hasUpperCases = false;
    for (int i = 0; pass[i] != '\0'; i++) {
        char c = pass[i];
        if (isupper(c)) {
            return true;
        }
    }
    return false;
}

void randomPassword(void) {
    
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

    int len;
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


