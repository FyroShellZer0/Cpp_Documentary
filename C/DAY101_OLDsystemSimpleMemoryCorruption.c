#include <stdio.h>
#include <string.h>

int main(void) {
    printf("Memory Corruption Simulation on old systems\n");
    char name[8];
    int score;
    printf("Enter name: ");
    gets(name);

    printf("name: %s\n", name);
    printf("score: %d\n", score);
    return 0;

}