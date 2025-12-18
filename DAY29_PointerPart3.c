#include <stdio.h>
void birthday(int *age);
int main() {
     // Pointer = A variable that stores memory address of another variable.
    // benifit: They avoid wasting memory by allowing you to pass
    // the address of a large data structure instead of copying the entire data.

    
    int age = 16;
    //int *pAge = &age; // DECLARED VARIABLE "POINTER"

    //IF WE HAVE A FUNCTION THAT ACCEPTS POINTERS, WE DONT NECESSARILY NEED
    //TO DECLARE A VARIABLE TO PASS IT IN
    //WE COULD JUST PASS IN THE MEMORY ADDRESS
    birthday(&age); 

    printf("You are %d years old!\n", age);
    return 0;
}

void birthday(int *age) { //THIS ACCEPTS POINTERS
    (*age)++;
}