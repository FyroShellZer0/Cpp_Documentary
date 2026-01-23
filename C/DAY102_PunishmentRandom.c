#include <stdio.h>
#include <time.h>
#include <stdlib.h>
void punishment(int random) {
    switch(random) {
        case 1:
            printf("You got punishment number 1!\n"); 
            printf("For 7 straight days:\n");
            printf("-No entertainment (YouTube, shorts, games, music for fun)\n");
            printf("Phone only for essentials + learning\n");
            printf("Sleep on time, wake up early\n");
            printf("extra 30 minutes on math\n");
            printf("\n");
            break; 
        case 2:
            printf("You got punishment number 2!\n");   
            printf("+1 hour math\n");
            printf("Write daily notes by hand\n");
            printf("Explain what you learned out loud(teaching)\n");
            printf("\n");
            break;
        case 3:
            printf("You got punishment number 3!\n"); 
            printf("Clean your entire room + workspace\n");
            printf("Organize files, code folders, notes\n");
            printf("Plan the next 2 weeks in detail\n");
            printf("Zero entertainment until done\n");
            printf("\n");
            break;
    }
}
int main(void) {
    srand(time(NULL));
    int random = (rand() % 3)+1;
    punishment(random);
    return 0;
}