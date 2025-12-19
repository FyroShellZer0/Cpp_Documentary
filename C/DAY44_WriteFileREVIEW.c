#include <stdio.h>
#include <stdlib.h>
int main() {

    FILE *pFile = fopen("//home//raiujen//Desktop//Output.txt", "w");
    
    char text[] = "Admin123";
    if (text == NULL) {
        printf("Error\n");
        exit(1);
    }
    fprintf(pFile, "%s", text);
    printf("Success!\n");
    fclose(pFile);
    return 0;
}