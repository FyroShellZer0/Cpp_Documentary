#include <stdio.h>
#include <stdbool.h>


bool ageCheck(int ageReceived) {

    if (ageReceived >= 18) {
        return true;
    }
    else {
        return false;
    }
}
int main() {
    int age = 17;


    if (ageCheck(age)) {
        printf("You are an Adult.\n");
    }
    else {
        printf("You are minor.\n");
    }
    return 0;
}