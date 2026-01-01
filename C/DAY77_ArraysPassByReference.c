#include <stdio.h>

void greet(char *c) {
    int i = 0;
    while(c[i] != '\0') {
        printf("%c", c[i]);
        i++;
    }
    printf("\n");
}
void greet2(char *c) {
    int i = 0;
    while(*(c + i) != '\0') {
        printf("%c", c[i]);
        i++;
    }
    printf("\n");
}
void greet3(char *c) {
    while(*c != '\0') {
        printf("%c", *c);
        c++;
    }
    printf("\n");
}
int main(void) {
    //! ARRAY ARE ALWAYS PASS TO A FUNTION BY REFERENCE
    char c[20] = "hello";
    greet(c);
    greet2(c);
    greet3(c);
    return 0;
}