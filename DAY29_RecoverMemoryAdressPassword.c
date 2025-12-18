#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main() {
    srand(time(NULL)); 
    int password = rand();
    int *passwordAdress = &password; //POINTER = stores the memory adress of password

    printf("Original password variable address: %p\n", &passwordAdress);
    int retrievedPassword = *passwordAdress;
    printf("Retrieved password: %d\n", *passwordAdress);
    printf("Retrieved password: %d\n", retrievedPassword);

    return 0;
}