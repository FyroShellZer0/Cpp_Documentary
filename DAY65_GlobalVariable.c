#include <stdio.h>
int a = 0;
int increment(int a) {
    return a+=1;
}
int main(void) {
    int new = increment(a);
    printf("incremented value of a: %d\n", new);
    return 0;
}
//! GLOBAL VARIABLE = A VARIABLE THAT YOU CAN ACCESS ANYWHERE.