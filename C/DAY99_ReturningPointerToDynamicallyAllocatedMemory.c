#include <stdio.h>
#include <stdlib.h>
int* add(int* a, int* b) { //! returns pointer to integer
    printf("address of a in add: %p\n", &a);
    printf("address stored in pointer a: %p\n", a);
    printf("value at address stored in a of add = %d\n", *a);

    int *c = malloc(sizeof(int));
    if(!c) return NULL;
    *c = (*a)+(*b);
    return c; //!returns an address || c is already a pointer
    //! return &c IS UNSAFE WE ARE RETURNING A MEMORY THAT DOESNT EXIST ANYMORE!
}
int main(void) {
    int x = 5, y = 4;
    //! int z = add(x, y); call by value
    int *z = add(&x, &y); //!call by reference || pointer 
    if(z != NULL) {
        printf("sum: %d\n", *z);
        free(z);
    }
    printf("address of x in main: %p\n", &x);
    

    return 0;

}