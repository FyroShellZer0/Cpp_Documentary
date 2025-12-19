#include <stdio.h>
void increment(int a) {
    a++;
    printf("function-> var a value: %d, var a address: %p\n", a, &a);
    
}
int main(void){
    //! when you pass by value ONLY, we can use it for:
    //! 1. COMPUTATION
    //! 2. MODIFY LOCAL COPY
    //! 3. RETURN A NEW VALUE
    //! 4. USE IT AS INPUT ONLY PARAMETER ETC.

            //! BUT! YOU CANT DO:
            //! 1. DEREFERENCE THE ORIGINAL VARIABLE
    int a = 0;
    increment(a);
    printf("\n");
    printf("value of a: %d, address: %p\n", a, &a);
    printf("\n");
    return 0;
}