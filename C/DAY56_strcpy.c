#include <stdio.h>
#include <string.h>
int main(void){
    // strcpy(dest, src)
    char source[] = "hello";
    char destination[10];
    strcpy(destination, source);
    printf("%s\n", destination);
    return 0;
}