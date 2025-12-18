#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h>
#include <unistd.h>

bool ask(const char question[]);

int main() {
    bool brushed = false;
    bool tookbath = false;
    bool tookbreakfast = false;
    bool wearclothes = false;
    bool wearID = false;
    bool wearbag = false;

    printf("******************************\n");
    printf("Fucking School Routine\n\n");

    while (true) {
        if (!brushed) brushed = ask("Did you brush your teeth?");
        if (!tookbath) tookbath = ask("Did you take a bath?");
        if (!tookbreakfast) tookbreakfast = ask("Did you eat your breakfast?");
        if (!wearclothes) wearclothes = ask("Did you put your clothes on?");
        if (!wearID) wearID = ask("Did you wear your ID?");
        if (!wearbag) wearbag = ask("Did you wear your bag?");

        bool all_done = brushed && tookbath && tookbreakfast && wearclothes && wearID && wearbag;

        if (all_done) {
            printf("ALL GOODS! GO TO SCHOOL!\n");
            printf("Shutting down in 5 seconds...\n");
            for (int i = 5; i > 0; i--) {
                printf("%d\n", i);
                sleep(1);
            }
            system("shutdown now");
            break;
        }

        // Feedback only for tasks not done
        if (!brushed) printf("Clean your disgusting teeth!\n");
        if (!tookbath) printf("Take a bath, you stinky human!\n");
        if (!tookbreakfast) printf("Eat human! EAAAT!\n");
        if (!wearclothes) printf("Wear your clothes! You're embarrassing!!\n");
        if (!wearID) printf("Wear your fucking ID human!!\n");
        if (!wearbag) printf("YOURRR BAAAAAG!\n");

        printf("\nTry again for the remaining tasks!\n\n");
    }

    printf("******************************\n");
    return 0;
}

bool ask(const char question[]){
    char choice = '\0';
    do {
        printf("%s (y/n): ", question);
        scanf(" %c", &choice);
        choice = tolower(choice);
    } while (choice != 'y' && choice != 'n');

    return choice == 'y';
}
