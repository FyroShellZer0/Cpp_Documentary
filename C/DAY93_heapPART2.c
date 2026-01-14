#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int a;
    int *p;
    p = (int*)malloc(sizeof(int));
    *p = 10;
    //!HEAP
    /*===========
      |         |
      |_________|
      |   10    |   //! p is pointing to 10
      |_________|
      |         |
      |         |
      ============
    */
    p = (int*)malloc(sizeof(int));
    *p = 20;
    //! what this does is from the start that it allocated a memory block 4 bytes that stores 10
    //! it creates another block of memory 4 bytes that stores 20
    //!HEAP
    /*===========
      |         |
      |_________|
      |   20    |    //! now p is pointing to 20
      |_________|
      |         |
      |         |
      |         |
      |_________|
      |   10    |
      |_________|    //! the previous block will still set in the heap, still consuming
      |         |
      ============
    *///! TO SOLVE THIS PROBLEM WILL BE DISCUSSED IN HeapFREE.c file
    return 0;
}