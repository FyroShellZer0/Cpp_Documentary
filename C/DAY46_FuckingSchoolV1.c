#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

void Final();
bool brush();
bool bath();
bool breakfast();
bool clothes();
bool ID();
bool bag();

int main() {
    printf("******************************\n");
    printf("Fucking School Routine\n");
    printf("\n");
    Final();
    printf("******************************\n");
    return 0;
}

void Final(){
    bool brushed = brush();
    bool tookbath = bath();
    bool tookbreakfast = breakfast();
    bool wearclothes = clothes();
    bool wearID = ID();
    bool wearbag = bag();

    if (brushed && tookbath && tookbreakfast && wearclothes && wearID && wearbag) {
        printf("All goods! survive the FUCKING school!\n");
    }
    else {
        if (!brushed) {
            printf("Clean your dirty teeth!\n");
        }
        if (!tookbath) {
            printf("Take a bath you stinky human!\n");
        }
        if (!tookbreakfast) {
            printf("Eat so you have energy!\n");
        }
        if (!wearclothes) {
            printf("Put your clothes on you're embarassing!\n");
        }
        if (!wearID) {
            printf("Wear your ID! You dont want to list your name there!\n");
        }
        if (!wearbag) {
            printf("Dont forget your bag!!\n");
        }
    }
}

bool brush(void){
    char choice = '\0';
    printf("Did you brush your teeth?: ");
    scanf("%c", &choice);
    getchar();
    if (choice == 'y') return true;
    else if (choice == 'n') return false;
}

bool bath(void) {
    char choice = '\0';
    printf("Did you take a bath?: ");
    scanf("%c", &choice);
    getchar();
    if (choice == 'y') return true;
    else if (choice == 'n') return false;
}

bool breakfast(void) {
    char choice = '\0';
    printf("Did you eat your breakfast?: ");
    scanf("%c", &choice);
    getchar();
    if (choice == 'y') return true;
    else if (choice == 'n') return false;
}

bool clothes(void) {
    char choice = '\0';
    printf("Did you put your clothes on?: ");
    scanf("%c", &choice);
    getchar();
    if (choice == 'y') return true;
    else if (choice == 'n') return false;
}

bool ID(void) {
    char choice = '\0';
    printf("Did you wear your ID?: ");
    scanf("%c", &choice);
    getchar();
    if (choice == 'y') return true;
    else if (choice == 'n') return false;
}

bool bag(void) {
    char choice = '\0';
    printf("Did you wear your bag?: ");
    scanf("%c", &choice);
    getchar();
    if (choice == 'y') return true;
    else if (choice == 'n') return false;
}
