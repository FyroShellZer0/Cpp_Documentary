#include <stdio.h>

int main() {
    //int scores[] = {100, 90, 80, 70, 60}

    /*


    int scores[5]; // the array contains 5 elements

    for(int i = 0; i < 5; i++) {
        printf("%d ", scores[i]);
    }
    //gives garbage value from the recent program
    //because C doesnt automatically clear memory from programs that used that memory previously

    */
   // SO TO CLEAR THE GARBAGE VALUES WE WILL PUT CURLY BRACES WITH 0 
    int scores[6] = {0};
    
    int size = sizeof(scores) / sizeof(scores[0]); // calculate the size 
    for(int i = 0; i < size; i++) {
        printf("Enter a score: ");
        scanf("%d", &scores[i]);
    }

    for(int i = 0; i < 6; i++){
        printf("%d ", scores[i]);
    }
    //OUT PUT:
        // 0 0 0 0 0 0
    
    return 0;
}