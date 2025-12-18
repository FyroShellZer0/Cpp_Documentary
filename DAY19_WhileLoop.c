#include <stdio.h>

int main() {
    //while loop = continue some code WHILE the condition remains true
    //condition must be true for us to enter while loop

    //  int age = 19;
    //  while (age >= 18) {
    //      printf("Youre an adult!\n");
    //  }

    int number = 0;
    while (number <= 0) {
        printf("Enter a number greater than 0: ");
        scanf("%d", &number); // while you havent entered a number greater than 0,the while loop continues to ask
    }
    return 0;
}