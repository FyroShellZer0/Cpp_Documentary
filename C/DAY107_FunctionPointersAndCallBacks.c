#include <stdio.h>
void A() {
    printf("Hello\n");
}
void B(void (*ptr)()) { // point to a function, no argument and should return void
    ptr(); //call back function that "ptr" points to
}
int main(void) {
    void (*p)() = A;
    B(p);
    return 0;
}