#include <stdio.h>
#include <stdlib.h>
int main(void) {
    //! what differ in heap vs stack
    /*
    Stack (Static / Automatic memory)

    What it is: Memory used for local variables and function calls.

    Allocation: Done automatically by the compiler when a function is called.

    Deallocation: Done automatically when the function ends.

    Size: Usually small and fixed (depends on OS, often a few MB).

    Speed: Very fast (because it’s managed by CPU instructions, no searching for memory).

    Access: LIFO — last thing pushed is first popped (function calls follow this)
    */

    /*
    Heap (Dynamic memory)

    What it is: Memory used for dynamic allocation, managed at runtime.

    Allocation: Done manually using malloc(), calloc(), or realloc().

    Deallocation: Must manually free it with free() or you’ll have memory leaks.

    Size: Much bigger than stack (depends on system RAM).

    Speed: Slower than stack (needs to search for free memory).

    Access: Flexible — you can allocate any amount at runtime and even keep it after the function ends.
    */

    int a; //!goes on stack

    //! LETS USE HEAP!
    //? malloc()

    int *p;
    p = (int *)malloc(sizeof(int)); // hey give me a block of memory which is 4 size(sizeof(int)) 
    //so one block of four bytes will be reserved/allocated in the heap and malloc will return a pointer
    //to the starting address of the block, and after that malloc returns a void pointer
    //todo  For example
    // the allocated memory of our 4 bytes block starts at 200 and malloc returns the address 200.simple as that

    //! int* tells the compiler:
    //“I know malloc returns void*, but I want to treat it as a pointer to int.”
    //This is called casting — converting one pointer type to another.
    *p = 10; //dereference and put a value
    //! the only way to use memory on heap is through reference
    return 0;
}