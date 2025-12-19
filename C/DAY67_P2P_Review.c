#include <stdio.h>

int main(void) {
    // you can use p2p to modify a pointer to point to other variable
    int a = 0;
    int b = 1;
    int *p = &a;
    printf("Stored in pointer p: %p\n", p);
    int **q = &p;
    *q = &b;
    printf("Stored in pointer p: %p\n", p);

    printf("AD A: %p\n", &a);
    printf("AD B: %p\n", &b);
    **q = *p + 2; //! from *p = &a, we modified the *p using p2p **q to pointer to &b so now we can
    printf("B: %d\n", b); //!                                      dereference and do arithmetic                                         
    return 0;
} 
