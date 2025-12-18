#include <stdio.h>
int main(void) {
    int a = 10;
    int *p;
    p = &a;
    // Pointer arithmetic
    printf("Address of a: %p\n", &a); // garbage
    printf("Address p is %p\n", p); //ex; p is 0x7fffffffd87c
    printf("Value at adress p is %d\n", (*p));
    printf("Size of integer : %d\n", sizeof(int));
    printf("Address p+1 is %p\n", p + 1); // 0x7fffffffd880  +1 || 1 * 4 bytes(int) = 4
    printf("GARBAGE: Value at address p+1 is %d\n", *(p+1)); // garbage value
    printf("Value at address p+1 is %d\n", *p +1);
    return 0;
}