#include <stdio.h>
#include <string.h>

int main(void) {

    char string[] = "Hello World";
    char *p = strchr(string, 'o'); // return a pointer 
    printf("%s\n", p); // output: ello
                       // starts with the found letter
    return 0;
}