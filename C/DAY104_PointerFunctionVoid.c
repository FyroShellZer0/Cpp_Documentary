#include <stdio.h>
#include <string.h>
void printName(char *name) {
    printf("Hello there, %s!\n", name);
}
int main(void) {
    void (*p)(char*);
    p = printName;
    char name[64];
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';
    printName(name);
    return 0;
}