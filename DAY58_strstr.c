#include <stdio.h>
#include <string.h>

int main(void) {
    // find substring
    char s[] = "Happy birthday!";
    char *p = strstr(s, "p");
    printf("%s\n", p);
    return 0;
}