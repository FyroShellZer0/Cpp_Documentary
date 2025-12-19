#include <stdio.h>

int main(void) {
    //! signed = can represent both positive and negative number

    //? signed char: -128 to 127
    //? signed int: -2,147,483,648 to 2,147,483,647 

    //! %u interprets the same bits as unsigned int | prints 4294967291

    signed int a = -5; //* stored as bits: 11111111 11111111 11111111 11111011 = -5
    printf("%d\n", a); //! -5
    printf("%u\n", a); //* prints 4294967291 (on 32-bit)
    //? IN 32 BIT, -5 IS 
    //* Binary: 11111111 11111111 11111111 11111011


    return 0;
}