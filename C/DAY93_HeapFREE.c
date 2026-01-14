#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int a;
    int *p;
    p = (int*)malloc(sizeof(int)); //4 bytes allocation
    *p = 10;
    free(p); // free the used memory
    p = (int*)malloc(sizeof(int));
    *p = 20;
    //! so:
    /*===========
      |         |
      |_________|
      |   20    |    
      |_________|
      |         |
      |         |
      |         |
      |_________|
      |   10    | //! the first block of memory will first be cleared
      |_________|    
      |         |
      ============
      */

      //!AFTER:
      /*===========
      |         |
      |_________|
      |   20    |   //! and then p is pointing to another memory address
      |_________|
      |         |
      |         |
      ============
    */
    return 0;
}