#include <stdio.h>

int main(void) {
    //! Pointers and Multi-dimensional array
    int A[5] = {1, 2, 3, 4, 5};
    //  200   204   208   212   126
    //! A[0]  A[1]  A[2]  A[3]  A[4]
    int *p = A;
    printf("address: %p\n", (void *)A); //? address of the first element
    printf("value: %d\n", *A); //? first element = 1
    printf("arithmetic: %d\n", *(A+1)); //! moving 1 bytes to access the next element = 2

    //! The same with *(A+i) == A[i] 
    //! (A+i) == &A[i]

    // todo FOR EXAMPLE
    //? WE WANT TO ACCESS THE NUMBER 5 IN OUR ARRAY
    printf("arithmethic accessing index[4]: %d\n", *(A+4)); 


    printf("\npointer: %p\n", (void *)p);
    printf("dereference: %d\n", *p);
    printf("Arithmetic: %d\n", *(p +2)); 



    //? 2 DIMENSIONAL ARRAY
    int B[2][3] = {{1, 2, 3}, 
                   {4, 5, 6}
                  }; //? two-1 dimensional array and 3 elements each. 
    //! B[0];  1-D arrays of 3 elements       A[0]           A[1]
    //! B[1];  1-D arrays of 3 elements       400            412  
    //?                           3 elements each = 3*4 = 12bytes 
    //int *q = B; //! COMPILATION ERROR
    //!        B will return a pointer to 1-D array of integers
    //! THE TYPE OF POINTER DOESNT MATTER WHEN YOU HAVE TO READ THE ADDRESS,
    //! IT MATTERS WHEN YOU DEREFERENCE || POINTER ARITHMETIC
    int (*q)[3] = B; //? THIS IS ALRIGHT
    printf("\n2D\n");
    printf("%p\n", (void *)&B[0]); //! 400
    printf("%p\n", (void *)B); // || &B[0] //! 400 

    printf("%d\n", B[0][0]);
    printf("%d\n", (*B)[0]);
    
    printf("%p\n", (void *)B+1);
    printf("%d\n", *(B+1)); //! NOW TOUCHING B[1] 2nd dimension, B[1][0] = 412
    
    printf("%d\n", *(B+1) +2);
    return 0;
}