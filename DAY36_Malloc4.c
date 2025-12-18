#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int number = 0;
    printf("How many ice creams would you buy?: ");
    scanf("%d", &number);
    getchar(); // clear newline

    // Allocate an array of string pointers
    char **flavors = malloc(number * sizeof(char*));

    if (flavors == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Allocate each flavor string
    for (int i = 0; i < number; i++) {
        flavors[i] = malloc(100 * sizeof(char)); // allow up to 99 chars per flavor
        if (flavors[i] == NULL) {
            printf("Memory allocation failed!\n");
            return 1;
        }

        printf("Enter flavor #%d: ", i + 1);
        fgets(flavors[i], 100, stdin);

        // Remove trailing newline
        flavors[i][strcspn(flavors[i], "\n")] = '\0';
    }

    // Print all flavors
    printf("\nYour flavors are:\n");
    for (int i = 0; i < number; i++) {
        printf("%d. %s\n", i + 1, flavors[i]);
    }

    // Free memory
    for (int i = 0; i < number; i++) {
        free(flavors[i]);
    }
    free(flavors);

    return 0;
}
