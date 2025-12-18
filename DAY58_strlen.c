#include <stdio.h>
#include <string.h>
int main(void) {
    char greet[] = "Hello";
    printf("%zu\n", strlen(greet)); // 
    if (strlen(greet) == 5) {
        printf("Hi\n");
    }
    return 0;
}