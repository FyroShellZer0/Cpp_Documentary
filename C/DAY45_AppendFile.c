#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
    char name[100] = "";    
    FILE *file = fopen("nameSAMPLE.txt", "a");
    if (file == NULL){
        printf("Error opening file\n");
        exit(1);
    }
    printf("Enter a name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    fprintf(file, "%s\n", name);
    
    fclose(file);
    return 0;
}