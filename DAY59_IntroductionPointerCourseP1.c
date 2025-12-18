#include <stdio.h>
int main(void) {
    int a; // 4 bytes
    char c; // 1 bytes
    float b; // 4 bytes
    // EACH HAS ITS MEMORY ADRESS LIKE A HOUSE ADRESS
    a = 5;
    int *p; // pointer to a interger
    p = &a; // p now has the address of a
    
    printf("address of a: %p\n", &a);
    printf("pointer to a: %p\n", p); 
    printf("address of the pointer variable: %p\n", &p);
    printf("dereference: %d\n", *p);
    *p = 10; // modefied value of pointer
    printf("modified a using pointer: %d\n", a);
    
    return 0;
}