#include <stdio.h>

int main(void) {
    int a[2][3] = {{1, 2, 3},{4, 5, 6}};

    int (*p)[3] = a; //Syntax  //! int *p = a; WRONG

    printf("a: %p\n", a); // 0x7ffd8f422af0 //? returning a pointerto one dimensional array
    printf("*a: %p\n", *a); // 0x7ffd8f422af0 //? dereferencing a[0][0] gives address
    printf("a[0] : %p\n", a[0]); // 0x7ffd8f422af0
    printf("a[0][0]: %p\n", &a[0][0]); 
    // starting address of the a[0] dimension has the same address with the first element of a[0]/a[0][0]

    //! THE TYPE OF POINTER PLAYS A ROLE WHEN YOU TRY TO DEREFERENCE, POINTER ARITHMETIC 
    //? a[i][j] = *(a[i] + j);   =    *(*(a+i) + j)
    //              int*                 int*

    printf("*(a[i]+j): %d\n", *(a[1]+2));
    printf("*(*(a+i)+j): %d\n", *(*(a+0)+2)); 
    return 0;
}