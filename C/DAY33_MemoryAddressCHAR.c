#include <stdio.h>

int main() {

    // memory = an array of bytes within RAM(streets with many houses)
    // memory block = a single unit (byte) within memory, used to hold some value(each house is a memory block
    // that a person is stored)
    // memory address = the address of where a memory block is located(house address on that street where the 
    // memory is located)


    char a = 'X';
    char b = 'Y';
    char c = 'Z';

    printf("%d bytes\n", sizeof(a));    //OUTPUT: 1 bytes
    printf("%d bytes\n", sizeof(b));     // EACH VARIABLE IS USING ONE BLOCK OF MEMORY
    printf("%d bytes\n", sizeof(c));

    printf("%p\n", &a);
    printf("%p\n", &b);
    printf("%p\n", &c);
    return 0;
}