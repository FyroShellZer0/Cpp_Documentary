#include <stdio.h>
void crash() {
    crash();
}
int main(void) {
    printf("This program is meant to crash by Stack overflow attack\n");
    crash();
    return 0;
}