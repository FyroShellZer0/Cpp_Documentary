#include <stdio.h>

int sumOfElements(int A[], int size){
    int i, sum = 0;
    for (i = 0; i < size;i++){
        sum+= A[i];
    }
    return sum;
}
int main(void) {
    int A[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(A) / sizeof(A[0]);
    int total = sumOfElements(A, size);
    printf("Sum of all elements: %d\n", total);
}