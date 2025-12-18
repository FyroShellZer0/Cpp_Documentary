#include <stdio.h>

int main(void) {
    int x = 5;
    printf("Address of x = %p, Value = %d\n", (void *)&x, x);
    int *p = &x; 
    printf("Address stored in p = %p\n", (void *)p);

    *p = 6; //! dereference - modified
    printf("modified value of x using pointer *p = %d\n", *p); //? dereferenced p  =  6

    int **q = &p; //? store the address of p in pointer q
    int ***r = &q;
    

    // printf("%d\n", *q); //! garbage in 64bit system printf("%d", address); INVALID
    //? POINTER TO POINTER CAN STORE THE ADDRESS THAT CAN BE DEREFERENCE 
    // ! DEREFERENCING SYNTAX:
    // ! POINTER TO POINTER = *(*VARIABLE) | **v && ***v;
    // ! POINTER TO POINTER TO POINTER = *(*(*VARIABLE));

    // ! PRINTING ADDRESS OF A POINTER TO POINTER = printf("%p", *q);  
    // ! PRINTING ADDRRESS OF POINTER TO POINTER TO POINTER - printf("%p", *r); 
    printf("Address stored in q = %p\n", (void *)*q); // ? Valid
     
    printf("Dereferenced twice from q to p to x = value: %d\n", **q); // ? DEREFERENCE TWICE || GO TO THE ADDRESS OF POINTER Q GO TO THE ADDRESS OF POINTER P

    printf("Address stored in *r = %p\n", (void *)*r);

    printf("Dereferenced trice r - q - p - x = value: %d\n", ***r);

    return 0;
}