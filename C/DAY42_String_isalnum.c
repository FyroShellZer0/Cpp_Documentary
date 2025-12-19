#include <stdio.h>
#include <string.h>
#include <ctype.h>
void confirm_alphanumerical(char message[]);
int main() {
    char message[] = "Hi How are you???";

    confirm_alphanumerical(message);

    return 0;
}
void confirm_alphanumerical(char message[]) {
    int length = strlen(message);
    printf("length: %d\n", length);
    
    for(int i = 0; i < length; i++) {
        char c = message[i];
        if(isalnum(c)) {
            printf("#%d: An alphanumeric!\n", i + 1);
        }
        else{
            printf("#%d: Not an alphanumeric!\n", i + 1);
        }
    } 
}