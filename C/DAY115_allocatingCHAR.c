#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char *p = (char*)malloc(2*sizeof(char));
    p[0] = 'A';
    *(p+1) = 'B';
    printf("character dynamically allocated: %c and %c\n", p[0], *(p+1));
    return 0;
}