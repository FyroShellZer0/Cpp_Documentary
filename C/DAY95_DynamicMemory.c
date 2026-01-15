#include <stdio.h>
#include <stdlib.h>


int main(void) {
//!                     MALLOC, CALLOC, REALLOC, FREE
//! ALLOCATE BLOCK OF MEMORY 

//? MALLOC - void* malloc(size_t size) 
//! it asks you the size of memory in bytes
//! returns a void pointer
    void *a = malloc(4);
    void *b = malloc(sizeof(int));
    void *c = malloc(10*sizeof(int)); // 10 integers
    *a = 2; //!INVALID
    //! BUT YOU CANT DEREFERENCE A VOID POINTER 
    //todo SO INSTEAD
    int *p = (int*)malloc(3*sizeof(int));
    *p = 2; //? VALID
    *(p+1) = 4;
    *(p+2) = 6;
    //!OR BASICALLY
    p[0] = 2;
    p[1] = 4;
    p[2] = 6;

    //TODO ============= CALLOC ==================
    //!CALLOC = void* calloc(size_t num, size_t size) 2 ARGUMENTS
    //? ARGUMENTS:
    //1. NUMBER OF ELEMENTS
    //2. SIZE OF DATA TYPES
    int *q = (int*) calloc(5, sizeof(int)); // 5 elements, 4 bytes each
    //! memory garbage free, starts from 0

    //TODO ==============REALLOC==============
    // to change the size of the block memory
    //! void* realloc(void* ptrADDRESS, size_t size)
    int *array = (int*)malloc(10 * sizeof(int)); //10 bytes int
    int *r = (int*) realloc(array,20*sizeof(int)); // re allocate the array into 20 bytes

    //todo=============FREE============
    // remove the allocated memory
    free(a);
    a = NULL;
    free(b);
    b = NULL;
    free(c);
    c = NULL;
    free(p);
    p = NULL;
    free(q);
    q = NULL;
    free(array);//! INVALID, YOU SHOULD NOT FREE A RESIZED MEMORY, YOU SHOULD FREE THE NEW ALLOCATED MEMORY
    free(r);
    r = NULL;
       
}
