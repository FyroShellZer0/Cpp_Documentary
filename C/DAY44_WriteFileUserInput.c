#include <stdio.h>
#include <stdlib.h>

int main() {

    char filename[100];
    printf("Enter File name: ");
    scanf("%99s", filename);

    FILE *pFile = fopen(filename, "w");
    if(pFile == NULL) {
        printf("Error || empty\n");
        exit(1);
    }
    char password[100];
    printf("Enter password: ");
    scanf("%99s", password);

    fprintf(pFile, "%s", password);
    printf("Congratulations!\n");
    fclose(pFile);
    return 0;
}