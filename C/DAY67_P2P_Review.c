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
    return 0;
} 
