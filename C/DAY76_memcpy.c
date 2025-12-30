#include <stdio.h>
#include <string.h>
int main(void) {
    //! memcpy() — The Raw Power Move
    //? Copies raw bytes from one memory location to another. 
    //? No null-terminator assumptions, just pure data movement.
    //! memcpy(destination, source, size_in_bytes);
    //todo unlike strcpy that only works on string, memcpy works for all data
    int src[] = {1, 2, 3, 4, 5};
    int dest[5];
    memcpy(dest, src, 5 * sizeof(int)); //! memcpy copies all 5 integers from src to dest
    for(int i = 0; i < 5; i++) {
        printf("%d ", dest[i]);
    }
    //! sizeof(int) tells memcpy how many bytes each int takes (usually 4 bytes on most systems)
    //? 5 * 4 = 20bytes are copied so all values are correctly transfered 1-5
    memcpy(dest, src, 5); // !WRONG = copies only 5 bytes as each integer is only 
    //! 4 bytes,so it only copies the first 5 bytes of the array

    printf("\n");
    
    return 0;
}
