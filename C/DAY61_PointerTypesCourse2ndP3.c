#include <stdio.h>

int main(void) {
    int a = 1025;
    int *p = &a;
    printf("Size of integer is %d\n", sizeof(int)); // Size of integer is 4
    printf("Address = %p, Value = %d\n", p, *p); // Address = 0x7fffffffd884, Value = 1025
    printf("Address = %p, Value = %d\n", p+1, *(p+1)); //! 0x7fffffffd888 Value = -10108 GARBAGE Because
    //!                                                  888 doesnt contain anything
    char *p0;
    //p0 = p; COMPILATION ERROR
    p0 = (char*)p;  //? typecasting
    printf("size of char is %d\n", sizeof(char));
    printf("Address = %p, Value = %d\n", p0, *p0); //* 00000001 = 1 || Address = 0x7fffffffd884, Value = 1
    
    //* 1025 = 00000000 00000000 00000100 00000001 
    //?                                    char
    //*       character is only one byte | 00000001 is equal to decimal 1
    
    printf("Address = %p, Value = %d\n", p0+1, *(p0+1)); //? 00000100 || Address = 0x7fffffffd885, Value = 4
    //* 1025 = 00000000 00000000 00000100 00000001
    //?                           char
    //! Since *p+1, 84+1 = 85.therefore, it moved to the 2nd byte which is 00000100 = 4
    //! OUTPUT: 4

    return 0;

}