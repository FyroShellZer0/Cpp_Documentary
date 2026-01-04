#include "DAY81_mylib.h"
size_t my_strlen(const char *str){
    const char *p = str;
    while(*p != '\0') {
        p++;
    }
    return (size_t)(p - str);
}