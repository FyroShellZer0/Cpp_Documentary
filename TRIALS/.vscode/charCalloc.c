#include <stdio.h>
#include <stdlib.h>
int main() {
    int number = 0;
    printf("Enter number of character to input: ");
    scanf(" %d", &number);
    char *symbol = calloc(number, sizeof(char));
    if (symbol == NULL) {
        printf("Memory Allocation Failed\n");
        return 1;
    }

    for(int i = 0; i < number; i++) {
        printf("Enter character #%d: ", i + 1);
        scanf(" %c", &symbol[i]);
    }
    for(int i = 0; i < number; i++) {
        printf("%c\n", symbol[i]);
    }
    free(symbol);
    symbol = NULL;

    return 0;
}