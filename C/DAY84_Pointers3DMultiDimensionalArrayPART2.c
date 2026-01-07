#include <stdio.h>
//!                         A[0]                  A[1]                 A[2]
int main(void) {//?     A[0][0] A[0][1]    A[1][0]  A[1][1]    A[2][0]    A[2][1]  
    int A[3][2][2] = {{{10, 20},{30, 40}},{{50, 60},{70, 80}},{{90, 100},{110, 120}}};
    int (*p)[2][2] = A;

    printf("A: %p\n", (void *)A); 
    printf("*A: %p\n", (void *)*A);
    printf("A[0]: %p\n", (void *)A[0]);
    printf("A[0][0]: %p\n", (void *)&A[0][0]);
    //!    A[i][j][k] = *(A[i][j]+k) || *(*(A[i]+j)+k)
    printf("*(A[i][j]+k): %d\n", *(A[2][1]+1));
    printf("*(*(A[i]+j)+k): %d\n", *(*(A[1]+1)+0));
    return 0;
}