#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {

    srand(time(NULL));
    int password = rand();
    int guess = 0;
    int attemp = 0;
    printf("password to crack: %d\n", password);
    while (guess != password) {
        guess++;
        attemp++;
    }
    printf("\naddress:%p\n", &password);
    printf("\nPassword found: %d\n", guess);
    printf("Attemp: %d attemps\n", attemp);


    return 0;
}