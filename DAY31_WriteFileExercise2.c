#include <stdio.h>

int main() {

    //FILE *pFile = fopen("Exercise2.txt", "w");
    //absolute file path
    FILE *pFile = fopen("//home/raiujen//Desktop//Exercise2.txt", "w");

    char happyBirtday[] = "Happy Happy Happy birthday to you!!!!\n";

    if (pFile == NULL) {
        printf("ERROR");
        return 1;
    }
    fprintf(pFile, "%s", happyBirtday);
    fclose(pFile);
    printf("File Written Successfully!\n");
    return 0;
}