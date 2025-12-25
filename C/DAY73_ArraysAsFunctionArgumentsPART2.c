#include <stdio.h>
int sumOfElements(int A[]) { //! SAME WITH (int *A) 
    int i, sum = 0;
    int size = sizeof(A)/sizeof(A[0]);
    printf("SOE - size of A = %zu, size of A[0] = %zu, Address stored in A: %p\n", sizeof(A), sizeof(A[0]), A);
    for(i = 0; i < size; i++) {
        sum+=A[i];
    }
    return sum;
}
int main(void){
    int A[] = {1, 2, 3, 4, 5};
    int total = sumOfElements(A);
    printf("MAIN - size of A = %zu, size of A[0] = %zu, Address: %p\n", sizeof(A), sizeof(A[0]), &A);
    printf("\nSum of elements: %d\n", total);
    
    return 0;
} 