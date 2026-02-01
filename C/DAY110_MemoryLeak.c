#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>
bool randomPick(int guess) {
    int temp = rand() %3 +1;
    printf("%d\n", temp);
    if(temp == guess) {
        return true;
    } 
    else {
        return false;
    }
}
int main(void) {
    srand(time(NULL));
    
    while(true) {
        int *guess = (int*)malloc(sizeof(int));
        printf("Enter your choice: ");
        scanf("%d", guess); //pointer
        bool pick = randomPick(*guess);
        printf(pick? "You win!\n" : "You lose!\n");
    }
    
    
    return 0;
}