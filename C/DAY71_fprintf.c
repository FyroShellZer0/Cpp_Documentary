#include <stdio.h>

int main(void) {
    //! fprintf() is a formatted output function that writes data 
    //! to a FILE STREAN. It's like printf(), but INSTEAD OF 
    //! PRINTING to the console, it WRITES TO A FILE.
    // BASIC SYNTAX: 
    //?      int fprintf(FILE *stream, const char *format, ...);
    FILE *file = fopen("sample.txt", "w");
    if(!file) {
        printf("Cannot open file\n");
        return 1;
    }
    fprintf(file, "hello world");
    fprintf(file, "today is %d %d %d\n", 12, 23, 2025);
    fclose(file);

    return 0;
}