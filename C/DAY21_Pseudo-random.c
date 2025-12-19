#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    //pseudo random = appear random but are determined by a mathematical formula
    //that uses a speed value to generate a predictable sequence of numbers.
    //advanced: mersenne twister or /dev/random
    srand(time(NULL)); // NULL = 0

    printf("random number: %d\n", rand());

    //we can use this to generate pseudo random numbers

    int randomNum = rand() % 2; //1 or 0 because divided by 2 can only return 1 or 0 remainder
    printf("%d\n", randomNum);

    //WHAT IF WE WANT A RANDOM NUMBER BETWEEN 1 AND 2
    int randomNumber = (rand() % 2) + 1; //1 or 0 because divided by 2 can only return 1 or 0 remainder
    printf("%d\n", randomNumber);

    //for greater ranges,lets create variables
    int min = 1;
    int max = 6;
    int random = (rand() % max - min + 1) + min;
    printf("%d", random);

    return 0;
}