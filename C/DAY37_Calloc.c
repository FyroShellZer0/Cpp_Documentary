#include <stdio.h>
#include <stdlib.h>
int main() {

    // calloc = contiguous allocation.
    //          allocates memory dynamically and sets all allocated bytes to 0;
    //          malloc() is faster but calloc() leads to less bugs
    //          calloc(#, sizeof()); 

    int number = 0;
    printf("Enter the number of players: ");
    scanf(" %d", &number);

    int *temp = malloc(1000 * sizeof(int));
    for (int i = 0; i < 1000; i++) temp[i] = 9999; //OLD VALUES
    free(temp);

    //int *scores = malloc(number * sizeof(int)); // will give garbage/old values
    int *scores = calloc(number, sizeof(int)); // sets all allocated bytes to 0
    if (scores == NULL) {
        printf("Memory Allocation Failed\n");
        return 1;
    }

    
    for (int i = 0; i < number; i++) {
        printf("%d\n", scores[i]);
    }

    free(scores);
    scores = NULL;
    return 0;
}