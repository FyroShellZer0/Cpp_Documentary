#include <stdio.h>
#include <string.h>

int main(void) {
    char buffer[8];
    printf("This program is meant to crash by buffer overflow attack\n");
    strcpy(buffer, "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA");
    return 0;
}
