#include <stdio.h>

int main(void) {
    int B[2][3] = {{2, 4, 6},{8, 10, 12}};
    int (*p)[3] = B;
    printf("address: %p\n", B); // address of the first element
    printf("first element address: %p\n", *B); // address of the first element
    printf("value of the first element: %d\n", **B);

    // ! B[i][j] = *(B[i]+j)
    //!          = *(*(B+i) + j)
    printf("address of dimension 2, index 1: %p\n", &B[1][1]);
    printf("%d\n",*(*(B+1) + 1)); 
    

    printf("address of the first dimension: %p\n", (void *)p); // same as B
    printf("address of the first element [0][0]: %p\n", (void *) *p); // same as *B
    printf("value of first element: %d\n", **p);
    
    //!ACCESSING B[1][]

    printf("address of B[1][1]: %p\n", (void *)(*(p+1)+1)); //SAME AS (*(B+1)+1) 
    printf("value of B[1][1]: %d\n", *(*(p+1)+1));
    return 0;
}