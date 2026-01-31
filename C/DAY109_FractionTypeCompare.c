#include <stdio.h>
#include <stdbool.h>
void fallback(bool (*type)(int, int), int a, int b) {
    bool functionType = type(a, b);
    if (functionType) {
        printf("Type: Improter Fraction\n");
    }
    else {
        printf("Type: Proper Fraction\n");
    }
}
bool type(int a, int b) {
    if(a >= b) {
        return true;
    }
    else{
        return false;
    }
}
int main(void) {
    int a = 0, b = 0;
    while(true) {
        printf("Enter numerator: ");
        scanf("%d", &a);
        getchar();
        printf("Enter denominator: ");
        scanf("%d", &b);
        fallback(type, a, b);

    }
    printf("\n");
    return 0;
}