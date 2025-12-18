#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void Dice(int dice);
    

int main() {
    
    srand(time(NULL));
    int dice = (rand() % 6) + 1;
    Dice(dice);
    
    return 0;
}
void Dice(int dice){
    char grid[3][3] = {' ', ' ', ' ',
                       ' ', ' ', ' ',
                       ' ', ' ', ' '};

    switch(dice) {
        case 1:
            grid[1][1] = '*';
            break;
        case 2:
            grid[0][0] = '*';
            grid[2][2] = '*';
            break;
        case 3:
            grid[0][2] = '*';
            grid[1][1] = '*';
            grid[2][0] = '*';
            break;
        case 4:
            grid[0][0] = '*';
            grid[0][2] = '*';
            grid[2][0] = '*';
            grid[2][2] = '*';
            break;
        case 5:
            grid[0][0] = '*';
            grid[0][2] = '*';
            grid[1][1] = '*';
            grid[2][0] = '*';
            grid[2][2] = '*';
            break;
        case 6:
            grid[0][0] = '*';
            grid[0][1] = '*';
            grid[0][2] = '*';
            grid[1][0] = '*';
            grid[1][1] = '*';
            grid[1][2] = '*';
            grid[2][0] = '*';
            grid[2][1] = '*';
            grid[2][2] = '*';
            break;
    }
    
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%c ", grid[i][j]);
        }
        printf("\n");
    }
}