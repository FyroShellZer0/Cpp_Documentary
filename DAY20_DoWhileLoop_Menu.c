#include <stdio.h>

int main() {
    int choice = 0;
    do {
        printf("1. start game\n2. settings\n3. exit\n");
        printf("Enter choice: ");
        scanf(" %d", &choice);
        switch(choice) {
            case 1: printf("Game has started!\n"); break;
            case 2: printf("Settings mode!\n"); break;
        }
    }while (choice != 3);
    return 0;
}