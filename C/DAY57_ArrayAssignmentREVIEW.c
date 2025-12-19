#include <stdio.h>

int main(void) {
    int age[5];
    age[0] = 5;
    age[1] = 10;
    age[2] = 16;
    age[3] = 22;
    age[4] = 13;
    int n = sizeof(age) / sizeof(age[0]);
    for(int i = 0; i < n; i++) {
        printf("index %d : %d\n", i + 1, age[i]);
    }
    return 0;
}