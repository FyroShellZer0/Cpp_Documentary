#include <stdio.h>

int main() {

    FILE *pFile = fopen("//home//raiujen//Desktop//congratulations.txt", "r");
    //WE NEED BUFFER, IT TEMPORARY STORES DATA FOR US TO READ
    char buffer[1024] = {0}; //1024 BYTES IS A GENERAL GOOD PURPOSE SIZE | CLEAR GARBAGE MEMORY = {0}
    if (pFile == NULL) {
        printf("Could not open file\n");
        return 1; //tell the compiler theres an error
    }

    //READ THE FILE = WHILE LOOP
    while(fgets(buffer, sizeof(buffer), pFile) != NULL){
        printf("%s", buffer);
    }

    fclose(pFile);
    return 0;
}