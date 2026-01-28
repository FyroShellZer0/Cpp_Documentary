#include <stdio.h>
#include <string.h>

int main(void) {
    char string[] = "Hello";
    char *p = strchr(string, 'l');
    printf("%s\n", p); //!starts with letter l
    // returns a pointer to the first 'l' it finds 
    // as l is at string[2] p will point to it 
    // p points to hello+2 which is l 
    //! printf("%s\n", p); prints the character starting at p
    //! until it hits the \0
    return 0;
}