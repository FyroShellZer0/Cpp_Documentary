#include <stdio.h>

int main(void) {
    int A[5] = {1, 2, 3, 4, 5};
    int *p = A; //? if we use the name of the array, "A", then "A" gives
    //? us0 the first element of the array
    printf("Address A: %p\n", (void*)(A)); //! d9d0
    printf("Address of A[0]: %p\n", (void*)(&A[0])); //! d9d0
    printf("value of A: %d\n", *A); //! value: 1

    
    printf("\nAddress of A+1: %p\n", (void*)(A+1)); 
    //! (void*)(A+1) TO AVOID MULTIPLYING WITH VOID = 1 SO IT WILL BE 4 INT SIZE
    printf("value of A+1: %d\n", *(A+1));

    //! ELEMENT AT INDEX I
    //? Address - &A[i] || (A+1)
    //? Value - A[i] || *A+1

            //!  'A' gives the base address
    //todo|| A = 1, 2, 3, 4, 5
    return 0;
}