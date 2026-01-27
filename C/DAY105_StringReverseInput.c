#include <stdio.h>
#include <string.h>

void reverseString(char *string){
    int index = 0;
    int length = strlen(string) - 1;
    char temporary;
    while(index < length) {
        //input : and
        temporary = string[index]; // string[0] -> temporary 
        string[index] = string[length]; // string[3] -> string[0];
        string[length] = temporary; // temporary -> string[3]
        index++; //move character
        length--; //after a loop, the string length decreases
    }

    
}
int main(void){
    char input[16];
    printf("Enter: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0';
    reverseString(input);
    printf("string: %s\n", input);
    return 0;
}