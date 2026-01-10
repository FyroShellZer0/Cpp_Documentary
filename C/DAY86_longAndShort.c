#include <stdio.h>

int main(void) {
    //? A short is a smaller integer type. It uses less memory than a normal int.
    short a; //! 2 bytes- -32,768 to 32,767
    short int b; // 
    unsigned short c; //! 2 bytes - 0 to 65,535     

    //? A long is a bigger integer type. It can store much larger numbers than a normal int.
    //! int - 4 bytes - -2,147,483,648 to 2,147,483,647
    //! long - 4/8 bytes - -2,147,483,648 to 2,147,483,647 (4 bytes) or bigger (8 bytes on 64-bit)
    //! long long - 8 bytes - -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807
    long x;
    long int y;
    long long int z;
    return 0;
}