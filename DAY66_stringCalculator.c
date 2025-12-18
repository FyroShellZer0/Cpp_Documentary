#include <stdio.h>
#include <string.h>
int calcu(char* string);
int main(void) {
    char string[256];
    printf("Enter: ");
    fgets(string, sizeof(string), stdin);
    string[strcspn(string, "\n")] = '\0';
    int num = calcu(string);
    printf("Size of %s is %d: ", string, num);
    printf("\n");
    return 0;
}
int calcu(char* string) {
    int num;
    return num = strlen(string);
}