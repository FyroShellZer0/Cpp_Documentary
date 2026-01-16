#include <stdio.h>

int main(void) {
    int array[] = {1, 2, 3, 4};
    int *a = array;
    printf("%d\n", *(a+2));
    return 0;
}