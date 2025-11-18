#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void clear_input_buffer(void) {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main(void) {
    char name[50];
    int number;
    char symbols[50]; // Character array for symbols
    int numberOfSymbol = 3; // Example: get 3 symbols

    // --- 1. Get Name Input ---
    printf("Enter name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';

    // --- 2. Get Number Input ---
    printf("Enter number: ");
    scanf("%d", &number);
    clear_input_buffer(); // Clear buffer after scanf

    // --- 3. Get Symbols Input (into a string) ---
    // Make sure 'symbols' has enough space for the characters + null terminator
    for(int i = 0; i < numberOfSymbol; i++) {
        printf("Enter character #%d: ", i + 1);
        scanf(" %c", &symbols[i]); // Note the space before %c to skip whitespace
    }
    symbols[numberOfSymbol] = '\0'; // Null-terminate the symbol string

    // --- 4. Combine all into a new variable ---

    // Define a large buffer to hold the final combined string
    char combined_result[200]; 

    // Use sprintf to format and combine everything into 'combined_result'
    // Format: "Name: [name], Number: [number], Symbols: [symbols]"
    sprintf(combined_result, "Name: %s, Number: %d, Symbols: %s", name, number, symbols);

    // --- 5. Print the final combined result ---
    printf("\n--- Final Result ---\n");
    printf("%s\n", combined_result);

    return 0;
}
