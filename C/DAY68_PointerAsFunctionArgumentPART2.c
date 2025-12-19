#include <stdio.h>
void increment(int *p){
    *p = *p + 1;
    printf("address of *p in function : %p\n", p); //! THE SAME AS MAIN

}
int main(void) {
    //! PASS BY REFERENCE
    //! DEREFERENCE THE ACTUAL VARIABLE
    //? CALL BY REFERENCE CAN SAVE US A LOT OF MEMORY BECAUSE 
    //? INSTEAD OF CREATING A COPY OF A LARGE AND COMPLEX DATA TYPE,
    //? WE JUST USE A REFERENCE TO IT
    int a = 0;
    int *p = &a;
    increment(&a); //? WE HAVE TO PASS THE ADDRESS OF THE 
    increment(p); //? OR IF WE WANT TO PASS THE POINTER
    printf("value of a in main: %d, address of a in main: %p\n", a, &a);

    return 0;
}