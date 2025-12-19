#include <stdio.h>
#include <string.h>
int main() {

    char name[30] = ""; 

    printf("Enter your name: ");
    fgets(name , sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    while (strlen(name) == 0) { // while length of string is empty, ask again
        printf("You havent entered your name, please enter your name: ");
        fgets(name , sizeof(name), stdin);
        name[strlen(name) - 1] = '\0';
    }

    printf("Hello,%s\n", name); // if its not empty,print it
    return 0;
}