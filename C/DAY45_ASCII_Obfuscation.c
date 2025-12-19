#include <stdio.h>

int main() {
    char c = 'j';
    printf("%c\n",c +12);
    char d = 'v';
    printf("%c\n", d -12);
    char name[] = "vermillion";
    for(int i = 0; name[i] != '\0'; i++){
        printf("%c", name[i] +10);
    }
    printf("\n");
    return 0;
}