#include <stdio.h>

int main() {
    //w = write mode
    //r = read mode
    //                  FILE NAME     MODE         
    FILE *pFile = fopen("Output.txt", "w");
    
    char text[] = "STRESSING DAY!\n";
    if (pFile == NULL){
        printf("Error\n");
        return 1;
    } 
    //rather than using printf to print something,were going to use fprintf FILE PRINTF
    //3 ARGUEMENTS = (POINTER TO A FILE, "%FORMAT SPECIFIER", variable);
    fprintf(pFile, "%s", text);

    printf("File was written successfully!\n");
    //WHEN YOU OPEN A FILE,IT IS GOOD PRACTICE TO CLOSE WHEN DONE WITH IT.
    fclose(pFile);
    return 0;
}