 #include <stdio.h>
 #include <stdlib.h>
 
 int main() {
    int number = 0;
    printf("Enter number of grades:");
    scanf("%d", &number);

    char *Grade = malloc(number * sizeof(char));//
    
    if (Grade == NULL) {
        printf("Memory allocation failed!\n");
        return 1;

    }
    
    for (int i = 0; i < number; i++) {
        printf("Enter grade #%d:", i + 1);
        scanf(" %c", &Grade[i]);
    }
    for (int i = 0; i < number; i++) {
        printf("%c ", Grade[i]);
    }
    free(Grade);
    Grade = NULL; 
    return 0;
}