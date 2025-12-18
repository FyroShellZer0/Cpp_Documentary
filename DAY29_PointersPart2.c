#include <stdio.h>
void birthday(int *age);
void Birthday(int age);
int main() {

     // Pointer = A variable that stores memory address of another variable.
    // benifit: They avoid wasting memory by allowing you to pass
    // the address of a large data structure instead of copying the entire data.

    int age = 16;
    int *pAge = &age;
    //birthday(age);
    //printf("You are %d years old", age);

    birthday(pAge);
    printf("You are %d years old", age);
    return 0;
}
void Birthday(int age) {
    //with functions in C,theyre pass by value,we make a copy of that value, and change the copy and return the value
    //so we are not changing the original age

    //we need to pass by reference
    age++;
}
//with functions in C,theyre pass by value,we make a copy of that value, and change the copy and return the value
    //so we are not changing the original age

    //we need to pass by reference
void birthday(int *age){
    // if were passing a pointer,our parameter also need to accept a pointer
    //void birthday(int *age); PROTOTYPE
    //void birthday(int *age) FUNCTION

    //WE NEED TO DEREFERENCE IT TO RETURN A DIFFERENT VALUE AT A GIVEN ADDRESS

    (*age)++;//THIS WILL GIVE ME A VALUE OF 16 AND INCREMENT IT BY 1
    // *age++ IF WE DO THIS WAY WE WOULD END UP INCREMENTING THE MEMORY ADRESS BY 1
}