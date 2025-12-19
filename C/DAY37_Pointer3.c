#include <stdio.h>

int main() {

    int x = 5;
    int *X = &x;
    int a = *X;
    int b = a;
    
    printf("%p\n", &x); //print the address of x

    printf("%p\n", X); //print the pointed address

    printf("%d\n", *X); // print the pointer value

    printf("%p\n", &X); //print the address of the pointer

    printf("%d\n", a); //dereference

    printf("%p\n", &a); // address of the dereference

    printf("%d\n", b);

    // Howeever its good practice to put p in every pointer
    // int *pX = &x;
    int y = 0;
    printf("%p\n", &y);
    int *pY = &y; // "POINTER TO Y"(EASY TO READ)
    int z = *pY; // dereference = go to the address pointed to by the pointer and grab the value
    printf("%p", &z);
    return 0;
}