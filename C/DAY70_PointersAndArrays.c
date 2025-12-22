#include <stdio.h>

int main(void) {
    int a = 5;
    int *p = &a;
    p = p+1; //! garbage! we added moved 4 bytes but it doesnt contain anything
    printf("garbage value of a: %d\n", *p);

    int A[5] = {1, 2, 3, 4, 5};
    int *q = &A[1];
    printf("\nAddress of A[1]: %p, Value: %d\n", q, *q); //! d9c4
    q = q+1; //? +4 bytes
    printf("New address of A[1]: %p, Value: %d\n", q, *q); //! d9c8
    q = q+1; //? +4 bytes
    printf("Newest address of A[1]: %p, Value: %d\n", q, *q); //! d9cc

    char name[] = "mike";
    char *c = &name[1];
    printf("\nname: %s\n", name);
    printf("Address of i: %p, character: %c\n", c, *c);
    c = c+2; // c = 1 byte, c+2 = current + 2 bytes
    printf("New address of i: %p, character: %c\n", c, *c);

    
    return 0;
}
