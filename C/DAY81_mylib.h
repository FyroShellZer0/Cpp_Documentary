#ifndef MYLIB_H //if MYLIB_H is not defined yet
#define MYLIB_H // the ifndef fails and skip, go to this 
#include <stddef.h> //for size_t

size_t my_strlen(const char *str);

#endif //ends the conditional started by #ifndef