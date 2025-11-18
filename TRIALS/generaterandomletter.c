#include <stdio.h>
#include <stdlib.h>
int main() {
    int random = rand() % 26;
    char letter = 'a' + random;
    printf("%c", letter);
}