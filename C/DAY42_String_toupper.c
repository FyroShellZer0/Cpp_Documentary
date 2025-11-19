#include <stdio.h>
#include <string.h>
#include <ctype.h>

void make_upper(char *s);
int main() {
    char s[] = "this string is all lowercase";
    make_upper(s);
    printf("%s\n", s);
    return 0;
}
void make_upper(char *s) {
    int length = strlen(s);
    for(int i = 0; i < length; i++) {
        s[i] = toupper(s[i]);
    }
}