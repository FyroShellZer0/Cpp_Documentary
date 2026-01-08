#include "DAY85_headerEXTERN.h"
#include <stdio.h>

int main(void) {
    /*
    header.h   → says WHAT exists
    source.c   → says WHERE it exists / allocates memory / implementation
    main.c      → USES it

    extern int counter; //!header
    --shared with many .c files
    --no memory allocated
    --safe to include everywhere
    */
    counter++;
    counter+=5;
    printf("Counter: %d\n", counter);
    return 0;
}