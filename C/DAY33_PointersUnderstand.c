#include <stdio.h>

int main() {

    int year = 2025;
    printf("%d\n", year);
    printf("%p\n", &year);//%p read the memory address and at the adress of year

    int *pYear = &year;//the pAge is now a pointer

    printf("%p\n", pYear);//prints the address that pYear is pointing to (the address of year)

    printf("%d\n", *pYear);//prints the value in the pointer pYear

    printf("%p\n", &pYear); //prints the adress of pYear itself

    




    return 0;
}