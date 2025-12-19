#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
    int choice;
    do {
    printf("\nTo Watch Movies\n");
    printf("1. See movie list\n");
    printf("2. Add movie\n");
    printf("3. Exit\n");
    printf("Enter choice: ");
    scanf(" %d", &choice);
    getchar();
    if (choice == 1) {
        printf("\nMovie list:\n");
        FILE *Rfile = fopen("MovieList.txt", "r");
        char buffer[1024] = {0};
        if (Rfile == NULL) {
            printf("Reading file error\n");
            exit(1);
        }
        while (fgets(buffer, sizeof(buffer), Rfile) != NULL){
            printf("%s", buffer);
        }
        printf("\n");
        fclose(Rfile);
        Rfile = NULL;
    
    }
    else if(choice == 2) {
        char movieName[100] = "";
        FILE *file = fopen("MovieList.txt", "a");
        if(file == NULL) {
            printf("File opening error\n");
            exit(1);
        }
        printf("Enter movie title: ");
        fgets(movieName, sizeof(movieName), stdin);
        movieName[strlen(movieName) - 1] = '\0';
        fprintf(file, "%s\n", movieName);
        printf("Successfully added\n");
        fclose(file);
        file = NULL;
    }
    }while (choice != 3);
    printf("Goodbye!\n");
    
    return 0;
}