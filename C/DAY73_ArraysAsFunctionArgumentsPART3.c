#include <stdio.h>

int sum(int *A, int size) { 
    int sum = 0;
    for (int i = 0; i < size; i++){
        sum+=A[i]; //! A[i] = *(A+i)
    }
    return sum;
}

int main(void) {
    int A[] = {1, 2, 3, 4, 5};
    int size = sizeof(A)/sizeof(A[0]);
    printf("size: %d\n", size); //! size 5
    int total = sum(A, size); //! A can be used for &A[0]
    printf("Sum of all elements: %d\n", total);
    printf("\n");
    
    return 0;
}