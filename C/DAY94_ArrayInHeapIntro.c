#include <stdio.h>
#include <stdlib.h>

int main(void) {
    //!array in heap
    int a;
    int *p;
    p = (int*)malloc(sizeof(int));
    *p = 10;
    free(p);
    p = (int*)malloc(20*sizeof(int)); //make a call to the malloc asking for one block == the total size of the arrayin bytes
    //20 elements = 20*4 = 80 bytes

     /*===========
      |         |
      |         |
      |         |    
      |_________|
      |         |
      |         |
      |         |
      |    p    | 
      |         | //! one big continuous block of memory for 20 integers will be allocated in the heap
      |_________|    
      |         |
      ============
      */
    
    return 0;
}