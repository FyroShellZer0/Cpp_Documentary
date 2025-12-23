#include <stdio.h>

int main(void) {
    //! snprintf (Safe Number Print Formatted) is a buffer-safe version of sprintf. 
    //! It prevents buffer overflows by limiting how much data is written.
    char buffer[10];
    sprintf(buffer, "hello");
    //sprintf(buffer, "This is a very long string that will overflow!"); //!Buffer overflow
    
    snprintf(buffer, "this is a very long string but snprintf cant terminate");
    //! safely truncated
    
}   