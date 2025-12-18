#include <stdio.h>
#include <stdlib.h>
int main() {


    int number = 0;

    printf("How many years do you want to enter: ");
    scanf(" %d", &number);

    int* Year = malloc(number * sizeof(int));
    if (Year == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    for (int i = 0; i < number; i++) {
        printf("Enter year #%d: ", i + 1);
        scanf(" %d", &Year[i]);
    }
    for (int i = 0;i < number; i++) {
        printf("%d\n", Year[i]);
    }

    free(Year);
    Year = NULL;
    return 0;
}