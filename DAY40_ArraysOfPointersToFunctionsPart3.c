#include <stdio.h>
int add(int x, int y);
int subtract(int x, int y);
int multiply(int x, int y);
int divide(int x, int y);
int main() {
    // Array of pointers to functions
    // we'll make multiples functions that have the same return values and the same numebers,types and parameters

    int (*array[]) (int, int) = {add, subtract, multiply, divide};
    int product = (*array[1])(3, 15);
    printf("%d\n", product);
    return 0;
}
int add(int x, int y) {
    return x + y;
}
int subtract(int x, int y) {
    return x - y;
}
int multiply(int x, int y){
    return x * y;
}
int divide(int x, int y) {
    return x / y;
}