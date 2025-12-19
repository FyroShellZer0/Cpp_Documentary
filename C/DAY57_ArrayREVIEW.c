#include <stdio.h>

int main(void) {
    // ARRAY - STORE MULTIPLE VALUES WITHOUT DECLARING MANY VARIABLES
    // SYNTAX:     datatype arrayname[arraysize];
    // EXAMPLE:    int age[5]; stores 5 ages

    // STORE VALUES
    int age[6] = {16, 12, 22, 50, 11};
    // calculate the size by dividing the name and an index[0]
    int n = sizeof(age) / sizeof(age[0]);
    for(int i = 0; i < n; i++) {
        printf("index #%d: %d\n", i + 1, age[i]);
    }
    return 0;
}