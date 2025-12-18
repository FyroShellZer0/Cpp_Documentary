#include <stdio.h>

int main() {
    //w = write mode
    //r = read mode
    //                  FILE NAME     MODE         
    FILE *pFile = fopen("//home/raiujen//Desktop//Output.txt", "r"); //USE DOUBLE BACK SLASH 
                                                                    //OTHERWISE C THINKS URE USING AN ESCAPE
                                                                    //SEQUENCE
    
    char text[] = "STRESSING DAY!\n";
    if (pFile == NULL){
        printf("Error\n");
        return 1;
    } 
    
    fprintf(pFile, "%s", text);

    printf("File was written successfully!\n");
    //WHEN YOU OPEN A FILE,IT IS GOOD PRACTICE TO CLOSE WHEN DONE WITH IT.
    fclose(pFile);
    return 0;
}