#include <stdio.h>
int main() {
    int correct = 8;
    int guess = 0;

    printf("Number guessing game\n");
    while (guess != correct) { // while the condition was not satisfied, repeat.
        printf("Enter number (1- 10): ");
        scanf(" %d", &guess);
    }

    printf("%d is correct!, You guessed it right!\n", correct);
    return 0;
}