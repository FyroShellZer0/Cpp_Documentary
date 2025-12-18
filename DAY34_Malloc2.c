#include <stdio.h>
#include <stdlib.h>
int main() {

    int number = 0;
    printf("How many numbers are you gonna input: ");
    scanf("%d", &number);

    int* numbers = malloc(number * sizeof(int));

    if (numbers == NULL) {
        printf("Memory allocation Failed\n");
        return 1;
    }

    for (int i = 0; i < number; i++) {
        printf("Enter a number for #%d: ", i + 1);
        scanf(" %d", &numbers[i]);
    }

    for (int i = 0; i < number; i++) {
        printf("%d ", numbers[i]);
    }
    free(numbers);
    numbers = NULL;
    return 0;
}