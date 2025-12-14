#include <stdio.h>
int main(void) {
    //! unsigned = can store only positive numbers
    //! if negative  
    signed int a = -5; 
    unsigned int b = -5; 
    unsigned int c = 2;
    printf("signed int a: %d\n", a); //? -5
    printf("bit: %u\n", a); //! 4294967291

    printf("\nunsiged int b: %d\n", b); //? -5
    printf("bit: %u\n", b); //! 4294967291

    printf("\nunsigned int c: %d\n", c); //* 2
    printf("bit: %u\n", c); //* 2
    return 0;
}