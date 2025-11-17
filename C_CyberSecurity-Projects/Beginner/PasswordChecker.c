#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include <time.h>
#include <stdlib.h>
//void Checker(bool(*isStrong)(char[]));
void Checker(char pass[]);
bool isLong(char pass[]);
bool hasSymbols(char pass[]);
bool hasNumbers(char pass[]);
bool hasUppercase(char pass[]);
int main() {
    char password[50] = "";
    char *ptr = password;
    printf("******************\n");
    printf("Password Checker\n");
    printf("Enter password: ");
    fgets(password, sizeof(password), stdin);
    password[strlen(password) - 1] = '\0';
    Checker(password);
    printf("******************\n");

    return 0;
}
void Checker(char pass[]){

    if (isLong(pass) && hasSymbols(pass) && hasNumbers(pass) && hasUppercase(pass)) {
        printf(" Overal: Strong!\n");
    }
    else {
        if (!isLong(pass)) {
            printf("Too short, 16 characters recommended.\n");
        }
        if (!hasSymbols(pass)) {
            printf("Please include Symbols!\n");
        }
        if (!hasNumbers(pass)) {
            printf("Please include numbers!\n");
        }
        if (!hasUppercase(pass)) {
            printf("Please include uppercases!\n");
        }
    }
}

bool isLong(char pass[]) {
    bool isLong = false;
    if(strlen(pass) >= 16) 
        return true;
    else return false;
}
bool hasSymbols(char pass[]) {
    bool hasSymbols = false;
    for (int i = 0; pass[i] != '\0'; i++) {
        char c = pass[i];
        if (!isalnum(c)) {
            return true;
        }
    }
    return false;
}
bool hasNumbers(char pass[]) {
    bool hasNumbers = false;
    for(int i = 0; pass[i] != '\0'; i++) {
        char c = pass[i];
        if(isdigit(c)){
            return true;
        }
    }
    return false;
}
bool hasUppercase(char pass[]) {
    bool hasUpperCases = false;
    for (int i = 0; pass[i] != '\0'; i++) {
        char c = pass[i];
        if (isupper(c)) {
            return true;
        }
    }
    return false;
}

