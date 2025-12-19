#include <stdio.h>
#include <string.h>

int main(void) {
    char src[] = "Hello";
    char dst[20]; 
    //strcpy(dst, src);               //behind the scenes: // H e l l o \0
                                                           // ↓ ↓ ↓ ↓ ↓ ↓
                                                           //    dst
    // dangerous if dst is too small
    // safer ish:
    strncpy(dst, src, sizeof(dst) - 1);
    dst[sizeof(dst) - 1] = '\0';

    printf("%s\n", dst);


    return 0;
}