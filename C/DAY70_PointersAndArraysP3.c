#include <stdio.h>

int main(void) {
    int A[] = {2, 4, 6, 8, 10};
    /* 
    printf("%p\n", A);
    printf("%p\n", &A[0]);
    printf("%d\n", A[0]);
    printf("%d\n", *A);
    */
    int *p = A;
    // A++; //! INVALID ||compilation error
    // p++; //? WORKS!

    for(int i = 0; i < 5; i++){
        printf("Value: %d\n", A[i]);
        printf("Value: %d\n", *(A + i));
        printf("Address: %p\n", (void*) (&A[i]));
        printf("Address:%p\n", (void*) (A+i));
        
        printf("\n");
    }
    return 0;
}