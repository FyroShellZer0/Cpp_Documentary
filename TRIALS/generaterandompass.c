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

// Function prototypes (updated to void return type)
void randomPassword();
void customPassword(char name[], int number, char symbol[]);
void clearBuffer(void);
void shuffle(char *array); // Helper function for shuffling

int main() {
    srand(time(NULL)); 
    int choice = 0;
    char name[25] = "";
    int number = 0;
    int numberOfSymbol = 0;
    // Allocate memory for symbols dynamically
    char *symbol = malloc((numberOfSymbol + 1) * sizeof(char)); 
    printf("Strong Password Generator\n");
    printf("1. Randomized Password\n");
    printf("2. Customized (enter your thoughts)\n");
    printf("Enter option: ");
    if(scanf(" %d", &choice) != 1) { // check for valid input
        printf("Invalid input. Exiting...\n");
        return 1;
    }
    clearBuffer();  
    if (choice == 1) {
        printf("Random Password generated: ");
        randomPassword();
        
    }
    else if(choice == 2){
        printf("Enter a name (dog, person, place, etc.): ");
        fgets(name, sizeof(name), stdin);
        name[strcspn(name, "\n")] = '\0';

        printf("Enter a number: ");
        if(scanf(" %d", &number) != 1) { // Input validation
            printf("Invalid number input. Exiting...\n");
            return 1;
        }
        clearBuffer();
        
        printf("How many symbols do you wanna enter?: ");
        if(scanf(" %d", &numberOfSymbol) != 1) { // Input validation
            printf("Invalid symbol count input. Exiting...\n");
            return 1;
        }
        clearBuffer();

        // Reallocate memory based on user input
        char *temp_symbol = realloc(symbol, (numberOfSymbol + 1) * sizeof(char));
        if(temp_symbol == NULL) {
            printf("Memory Reallocation failed\n");
            free(symbol);
            return 1;
        }
        symbol = temp_symbol;

        for(int i = 0; i < numberOfSymbol; i++) {
            printf("Enter character #%d: ", i + 1);
            scanf(" %c", &symbol[i]);
            clearBuffer(); // Clear buffer after reading each symbol
        }
        symbol[numberOfSymbol] = '\0'; // Null-terminate the symbol string
        
        // Pass to the function
        customPassword(name, number, symbol);
        free(symbol);
        symbol = NULL;
    }
    else {
        printf("Error: Invalid option selected.\n");
        return 1;
    }

    return 0;
}

void clearBuffer(void) {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void randomPassword() {
    char password[PASSWORD_LENGTH + 1];

    for (int i = 0; i < PASSWORD_LENGTH; i++) {
        int index = rand() % strlen(ALL_CHARS);
        password[i] = ALL_CHARS[index];
    }
    password[PASSWORD_LENGTH] = '\0';

    printf("%s\n", password);
}

void customPassword(char name[], int number, char symbol[]) {
    char combined[PASSWORD_LENGTH + 1] = ""; // Buffer size fixed to max length + null terminator
    
    // Use snprintf to safely combine initial elements up to the max length
    // If input is > 16 chars, it will be truncated here initially.
    snprintf(combined, PASSWORD_LENGTH + 1, "%s%d%s", name, number, symbol);
    
    int current_len = strlen(combined);

    // --- NEW LOGIC TO ENSURE AN UPPERCASE CHARACTER IS PRESENT ---
    int has_uppercase = 0;
    for (int i = 0; i < current_len; i++) {
        if (isupper((unsigned char)combined[i])) {
            has_uppercase = 1;
            break;
        }
    }

    // If no uppercase character exists in the input so far, append a random one
    if (!has_uppercase && current_len < PASSWORD_LENGTH) {
        int index = rand() % strlen(UPPERCASE);
        combined[current_len] = UPPERCASE[index];
        current_len++;
        combined[current_len] = '\0';
    }

    // Pad the rest of the password with random characters until exactly 16 chars
    while(current_len < PASSWORD_LENGTH) {
        int index = rand() % strlen(ALL_CHARS);
        combined[current_len] = ALL_CHARS[index];
        current_len++;
    }
    combined[PASSWORD_LENGTH] = '\0'; // Ensure null-terminated at exactly 16 chars

    // Shuffle the combined password to randomize the order and hide input pattern
    shuffle(combined);

    printf("Generated password: %s\n", combined);
}

// Fisher-Yates shuffle algorithm implementation to randomize the string order
void shuffle(char *array) {
    int n = strlen(array);
    if (n <= 1) return;

    for (int i = n - 1; i > 0; i--) {
        int j = rand() % (i + 1);
        char temp = array[i];
        array[i] = array[j];
        array[j] = temp;
    }
}
