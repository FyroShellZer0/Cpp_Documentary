#include <stdio.h>
#include <string.h>
int main() {

    char names[4][25] = {0}; // remove garbage value IT CAN HOLD 3 NAMES AND EACH
    //MAXIMUM SIZE OF 25 CHARACTERS
    int rows = sizeof(names) / sizeof(names[0]);

    //RATHER THAN MANUALLY CHANGING THE ROWS 
    //WE CAN CALCULATE THE SIZE OF OUR ARRAY OF STRINGS
/*
    printf("Enter name: ");
    fgets(names[0], sizeof(names[0]), stdin); // we have to include the index number
    names[0][strlen(names[0]) - 1] = '\n';

    printf("Enter name: ");
    fgets(names[1], sizeof(names[1]), stdin); // we have to include the index number
    names[1][strlen(names[1]) - 1] = '\n';

    printf("Enter name: ");
    fgets(names[2], sizeof(names[2]), stdin); // we have to include the index number
    names[2][strlen(names[2]) - 1] = '\n';

    */
    for(int i = 0; i < rows; i++) {
        printf("Enter name: ");
    fgets(names[i], sizeof(names[i]), stdin); // we have to include the index number
    names[i][strlen(names[i]) - 1] = '\n';

    }
    //printf("%s\n", names[0]);
    //printf("%s\n", names[1]);
    //printf("%s\n", names[2]);

    for(int i = 0;i < rows; i++) {
        printf("%s\n", names[i]);
    }
    return 0;
}