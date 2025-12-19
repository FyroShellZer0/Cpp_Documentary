#include <stdio.h>
#include <stdbool.h>
int main() {
    bool isRegistered = true;
    bool haveUsername = true;
    bool havePassword = true;
    bool isBanned = true;

    if (isRegistered && haveUsername && havePassword && !isBanned) {
        printf("Login successful.\n");
    }
    else {
        if (!isRegistered) {
            printf("Your account is not registered.\n");
            return 0;
        }
        if (!haveUsername) {
            printf("You didnt enter username.\n");
            return 0;
        }
        if (!havePassword) {
            printf("You didnt enter password.\n");
            return 0;
        }
        if (isBanned) {
            printf("Your account is banned,you cannot use it,aborting..");
            return 0;
        }
    }
    return 0;
}