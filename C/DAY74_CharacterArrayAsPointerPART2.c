#include <stdio.h>

int main(void) {
    char c[] = "john"; //! \0 included in bytes so 5 bytes
    
    int len = strlen(c); //! length: 4 = because the \0 doesnt count
    printf("Size in bytes: %d, length: %d\n", sizeof(c), len);
    return 0;
}