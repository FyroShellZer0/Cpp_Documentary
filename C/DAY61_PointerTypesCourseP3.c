#include <stdio.h>

int main(void) {
    int a = 1025;
    int *p = &a;
    printf("Size of integer is %d\n", sizeof(int)); // Size of integer is 4
    printf("Address = %p, Value = %d\n", p, *p); // Address = 0x7fffffffd89c, Value = 1025
    char *p0;
    //p0 = p; COMPILATION ERROR
    p0 = (char*)p;  //? typecasting
    printf("size of char is %d\n", sizeof(char));
    printf("Address = %p, Value = %d\n", p0, *p0); 
    //* 1025 = 00000000 00000000 00000100 00000001 
    //?                                    char
    //*       character is only one byte | 00000001 is equal to decimal 1
    

    

    return 0;

}