#include <stdio.h>

int main() {
    int correct = 9;
    int guess = 0;

    do {
        printf("Numeber guessing game\n");
        printf("Enter your guess (1-10): ");
        scanf(" %d", &guess);
    }while (guess != correct);
    return 0;
}