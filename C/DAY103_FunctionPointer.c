#include <stdio.h>
int add(int a, int b){
    return a+b;
}
int main(void) {
    int c;
    int (*ptr)(int, int);
    ptr = add;
    c = (*ptr)(5,10);
    printf("result: %d\n", c);
    return 0;
}