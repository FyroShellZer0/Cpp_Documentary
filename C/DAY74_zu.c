#include <stdio.h>

int main(void) {
    //! %zu  = is the format specifier for size_t - a special unsigned integer type used for sizes and counts in C.
    //! size_t is the return type of many functions:
    //! -strlen()
    //! -sizeof operator
    //! -fread(), fwrite() return values
    char str[] = "hello";
    size_t length = strlen(str);    
    //printf("length: %d\n", length);//! using %d may cause warnings

    //TODO  CORRECT
    printf("length: %zu\n", length);

    printf("size of int : %zu bytes\n", sizeof(int));
    printf("size array : %zu in bytes\n", sizeof(str)); //! 6 = 5 + \0 = 6
    return 0;
}