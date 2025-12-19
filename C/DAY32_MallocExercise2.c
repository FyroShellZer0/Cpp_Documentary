#include <stdio.h>
#include <stdlib.h>
int main() {
    int number = 0;

    printf("How many prices are you gonna input: ");
    scanf("%d", &number);
    int *prices = malloc(number * sizeof(int));

    if (prices == NULL) {
        printf("Memory Allocation Failed!\n");
        return 1;
    }

    for (int i = 0;i < number; i++) {
        printf("Enter price #%d: ", i + 1);
        scanf(" %d", &prices[i]);
    }
    for(int i = 0; i < number; i++) {
        printf("$%d\n", prices[i]);
    }

    return 0;
}