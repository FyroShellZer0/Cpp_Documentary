#include <stdio.h>
#include <string.h>
struct player{
    char name[8];
    int score;
};
int main(void) {
    printf("The data is meant to get corrupted\n");
    struct player p;
    p.score = 99;
    printf("Enter name: ");
    fgets(p.name, 64, stdin);
    printf("name: %s\n", p.name);
    printf("score: %d\n", p.score);
    return 0;
}