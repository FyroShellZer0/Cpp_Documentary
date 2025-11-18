#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
// preprocessor macro
// it replaces TEXT before your program is compiled
#define UPPERCASE "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
#define LOWERCASE "abcdefghijklmnopqrstuvwxyz"
#define DIGITS "0123456789"
#define SYMBOLS "!@#$%^&*()_+-=[]{};':\"<>,.?/"
#define ALL_CHARS UPPERCASE LOWERCASE DIGITS SYMBOLS
#define PASSWORD_LENGTH 16
char randomPassword() {
    
    printf("Generating password...\n");
    srand(time(NULL)); 

    printf("Password: ");
    for (int i = 0; i < PASSWORD_LENGTH; i++) {
        // Select a random character from the combined set
        int index = rand() % strlen(ALL_CHARS);
        printf("%c", ALL_CHARS[index]);
    }
    printf("\n");
}
int main() {
    srand(time(NULL));
    printf("Generating password...\n");
    randomPassword();
    return 0;
}