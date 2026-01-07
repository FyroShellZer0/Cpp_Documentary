#include "DAY81_mylib.h"
#include <stdbool.h>
size_t my_strlen(const char *str){
    const char *p = str;
    while(*p != '\0') {
        p++;
    }
    return (size_t)(p - str);
}

bool my_strcmpBool(const char *a, const char *b){
    while (*a && *b) {
        if (*a != *b) {
            return false;
        }
            a++;
            b++;
        
    }
    return *a == *b;

}