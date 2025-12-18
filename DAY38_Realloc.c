#include <stdio.h>
#include <stdlib.h>
int main() {
    // realloc = reallocation
    //         RESIZE previously allocated memory
    //          realloc(ptr, bytes);

    int number = 0;
    printf("Enter number of prices: ");
    scanf(" %d", &number);

    float *prices = calloc(number, sizeof(float));
    if (prices == NULL) {
        printf("Memory Reallocation failed\n");
        return 1;
    }

    for (int i = 0; i < number; i++) {
        printf("Enter price for #%d: ", i + 1);
        scanf(" %f", &prices[i]);

    }

    int newNumber = 0;
    printf("Enter a new number of prices: ");
    scanf(" %d", &newNumber);
    //temp = temporary
    float *temp = realloc(prices, newNumber * sizeof(float));

    if (temp == NULL) {
        printf("Could not reallocate memory\n");

    }
    else{
        prices = temp;
        temp = NULL;
        for (int i = number; i < newNumber; i++) {
        printf("Enter price for #%d: ", i + 1);
        scanf(" %f", &prices[i]);
        }

        for (int i = 0; i < newNumber; i++) {
        printf("$%.2f\n", prices[i]);
        }
        
    }

    

    //what if we want to add prices or get rid of some?




    free(prices);
    prices = NULL;



    return 0;

}