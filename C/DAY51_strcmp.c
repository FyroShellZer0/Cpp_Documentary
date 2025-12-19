#include <stdio.h>
#include <string.h>
int main() {
    char name[100] = "";
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    if (strcmp(name, "Jen") == 0) {
        printf("Welcome back Jen\n");
    }
    else if(strcmp(name, "bro") == 0){
        printf("Hi bro!\n");
    }
    return 0;
}