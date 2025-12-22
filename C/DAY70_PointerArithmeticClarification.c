#include <stdio.h>

int main(void) {
    int a[] = {1, 3, 4, 10, 15};
    printf("%d\n", *a+1); //! (*A) + 1 || a[0] = 1 -> 1+1 = 2
    printf("%d\n", *(a+1)); //? from a[0] + 1(4 bytes) = a[1]
    //? *(a+1) address of a[0] + 4 bytes = 3
    return 0;
}