#include <stdio.h>
void increment(int x) { //! x here is a PARAMETER
    x++;
}
int main(void) {
    int a = 0;
    increment(a); //! a here is an ARGUMENT
    return 0;
}