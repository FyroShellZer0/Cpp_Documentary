#include <stdio.h>

int main() {

    // memory = an array of bytes within RAM(streets with many houses)
    // memory block = a single unit (byte) within memory, used to hold some value(each house is a memory block
    // that a person is stored)
    // memory address = the address of where a memory block is located(house address on that street where the 
    // memory is located)


    char a;
    char b[2];
    
    printf("%d bytes\n", sizeof(a));    //OUTPUT: 1 bytes
    printf("%d bytes\n", sizeof(b));     // EACH VARIABLE IS USING ONE BLOCK OF MEMORY
    

    printf("%p\n", &a);     //EXAMPLE OUTPUT: 0x7fffffffd965
    printf("%p\n", &b);     //(STREET ADDRESSES OF EACH OF OUR MEMORY BLOCKS)
    // THE VALUE IS A HEXADECIMAL

    //*********STANDARD VALUES************:
    //  DECIMAL = 0-9;
    //  HEXADECIMAL = 0-9 + A-F; TOTAL = 16 
    return 0;
}