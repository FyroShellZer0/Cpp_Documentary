#include <stdio.h>

int main() {

    // Pointer = A variable that stores memory address of another variable.
    // benifit: They avoid wasting memory by allowing you to pass
    // the address of a large data structure instead of copying the entire data.

    int age = 25; //this variable has a memory adress

    printf("%p\n", &age); // Adress : 0x7fffffffda34 = this is where the variable age is located in memory
    //HOW POINTER WORKS IS:
        // WE'RE GOING TO STORE THIS ADDRESS AS A VALUE IN ANOTHER VARIABLE.
    //HERES HOW: 

    int myAge = 16;
    //WERE GOING TO USE A * TO CREATE A POINTER,ITS CALLED "DEREFERENCE OPERATOR"
    //WERE TELLING THE COMPILER  THAT WERE GOING TO STORE A POINTER BY USING THE DEREFERENCE OP
    int *pMyAge = &myAge;
    printf("\n%p\n", &myAge);
    printf("%p\n", pMyAge); // POINTER TO AGE | you can put capitalization
    //OUTPUT : 0x7fffffffda2c
    //         0x7fffffffda2c 
    //WE ARE GIVEN THE SAME VALUE
    //OUR ADDRESS OF OUR VARAIBLE myAge, ITS THE SAME AS THE VALUE STORED WITH OUR POINTER TO myAge

    
    return 0;
}