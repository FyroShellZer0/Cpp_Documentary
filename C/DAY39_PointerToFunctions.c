#include <stdio.h>
void function(int x);

int main() {
    //pointer to a function
    void (*function_pointer)(int); //declare the function pointer

    function_pointer = &function; // adress of the function

  //call the function  |value
    (*function_pointer) (4); // dereference . we look at the address stored and grab the value
    

    return 0;
}
void function(int x) {
    printf("x: %d\n", x);
}
