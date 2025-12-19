#include <stdio.h>
#include <string.h>

int main(void) {
    char string[20] = "Hello";
    strcat(string, " World"); // add string
    printf("%s\n", string);
    return 0;
}