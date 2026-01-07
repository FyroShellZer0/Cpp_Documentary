#ifndef MYLIB_H //if MYLIB_H is not defined yet
#define MYLIB_H // the ifndef fails and skip, go to this 
#include <stddef.h> //for size_t
#include <stdbool.h>
size_t my_strlen(const char *str);

bool my_strcmpBool(const char* a, const char *b);
#endif //ends the conditional started by #ifndef