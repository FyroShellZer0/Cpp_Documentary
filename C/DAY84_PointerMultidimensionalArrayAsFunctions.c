#include <stdio.h>
void oneDimension(int *A);

void TwoDimension(int B[][3]);

//! void MultiDimension(int **A); WRONG!
void MultiDimension(int (*A)[2][2]);
//!                         A[0]                  A[1]                 A[2]
int main(void) {//?     A[0][0] A[0][1]    A[1][0]  A[1][1]    A[2][0]    A[2][1]  
    int A[3][2][2] = {{{10, 20},{30, 40}},{{50, 60},{70, 80}},{{90, 100},{110, 120}}};
    MultiDimension(A);

    int B[2][3] = {{1, 2, 3},{4, 5, 6}};
    TwoDimension(B);
    return 0;
}
void oneDimension(int *A){
    //
}
void TwoDimension(int B[][3]) {
    //
}
void MultiDimension(int (*A)[2][2]) {
    //
}