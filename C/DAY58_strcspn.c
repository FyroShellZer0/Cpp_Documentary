#include <stdio.h>
#include <string.h>
#include <string.h>
int main(void) {
    char name[50];
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '0';
    // safer than name[strlen(name) - 1] = "\0";
    
    return 0;
}