#include <stdio.h>
int main(void) {
    int a = 1025;
    int *p;
    p = &a;
    printf("Size of int %d\n", sizeof(int));
    printf("Address = %p, Value = %d\n", p, *p);
    //? VOID POINTER - GENERIC POINTER
    void *p0;
    //p0 = (void*)p; //! WE DO NOT NEED AN EXPLICIT CASTING HERE "void *p0;" IS VALID;
    p0 = p; 
    //! BUT BECAUSE THIS PARTICULAR POINTER TYPE IS NOT MAPPED TO A PARTICULAR DATA TYPE,WE CANNOT DEREFERENCE
    //! THIS POINTER VARIABLE. DEREFERENCING WOULD CAUSE AN ERROR!
    //* printf("Address = %p, Value = %d\n", p0, *p0);


    //? YOU CAN ONLY PRINT THE ADDRESS
    printf("Address = %p\n", p0);
    //printf("Address = %p\n", p0+1); //! ERROR||COMPILATION ERROR
    

    return 0;
}