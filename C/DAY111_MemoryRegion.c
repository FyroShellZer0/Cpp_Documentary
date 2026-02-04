#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int x = 10; // stack
    int *y = (int*) malloc(sizeof(int));
    *y = 20; // heap

    printf("stack: %p\nheap: %p\n", &x, y);
    return 0;
}