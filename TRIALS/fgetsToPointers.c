#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
void result(char name[]);
bool isLong(char name[]);
bool hasSymbols(char name[]);
bool hasNumbers(char name[]);
bool hasUppercase(char name[]);
int main() {
    char name[50] = "";
    printf("Enter name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';
    result(name);
    return 0;
}
void result(char name[]) {
    printf("%s\n", name);
    if (isLong(name)) {
        printf("Long\n");
    }
    else {
        printf("Short\n");
    }
}
bool isLong(char name[]) {
    if (strlen(name) >= 10) return true;
    else return false;
}
bool hasSymbols(char name[]) {
    bool hasSymbols = false;
    for (int i = 0; name[i] != '\0'; i++) {
        char c = name[i];
        if (!isalnum(c)) {
            return true;
        }
    }
    return false;
}
bool hasNumbers(char name[]) {
    bool hasNumbers = false;
    for(int i = 0; name[i] != '\0'; i++) {
        char c = name[i];
        if(isdigit(c)){
            return true;
        }
    }
    return false;
}
bool hasUppercase(char name[]) {
    bool hasUpperCases = false;
    for (int i = 0; name[i] != '\0'; i++) {
        char c = name[i];
        if (isupper(c)) {
            return true;
        }
    }
    return false;
}
