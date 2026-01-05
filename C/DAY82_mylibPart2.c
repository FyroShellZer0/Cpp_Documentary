#include <stdio.h>
#include "DAY81_mylib.h"
#include <stdbool.h>
int main(void) {
    char name[] = "jane";
    char name2[] = "jane";
    bool isSame = my_strcmpBool(name, name2);
    if(isSame){
        printf("Same name!\n");
    }
    else {
        printf("Not the same name!\n");
    }

    return 0;
}