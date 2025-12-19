#include <stdio.h>

int main() {

    FILE *pFile = fopen("//home//raiujen//Desktop//Exercise.txt", "w");

    char letter[] = "I hope you dont give up on your dreams.\n";

    if(pFile == NULL) {
        printf("Error!\n");
        return 1;
    }
    

    fprintf(pFile, "%s", letter);

    printf("File Written Successfully!\n");

    fclose(pFile);

    return 0;
}