#include <stdio.h>

int main() {
    // switch = an alternative to using many if-else statements
    //more efficient w/ fixed integer values
    int dayOfWeek = 0;
    printf("Enter a number of the week (1-7): ");
    scanf("%d", &dayOfWeek); // adress
    switch(dayOfWeek) {
        case 1:
            printf("It is Monday!\n");
            break; //break the switch
        case 2:
            printf("It is Tuesday!\n");
            break; // if break is missing,it will follow the case but continue;
        case 3:
            printf("It is Wednesday!\n");
            break;
        case 4:
            printf("It is Thursday!\n");
            break;
        case 5:
            printf("It is Friday!\n");
            break;
        case 6:
            printf("It is Saturday!\n");
            break;
        case 7:
            printf("It is Sunday\n");
            break;
        default: // if theres no matches act as else; / doesnt need a break
            printf("Invalid,please enter 1-7\n");

    }

    char DayWeek = '\0';
    getchar(); //clear newline garbage from scanf
    printf("Enter the character of the Day (M, T, W, R, F, S, U): ");
    scanf("%c", &DayWeek);
    switch(DayWeek) {
        case 'M':
            printf("Its Monday!");
            break;
        case 'T':
            printf("Its Tuesday!");
            break;
        case 'W':
            printf("Its Wednesday!");
            break;
        case 'R':
            printf("Its Thursday!");
            break;
        case 'F':
            printf("Its Friday!");
            break;
        case 'S':
            printf("Its Saturday!");
            break;
        case 'U':
            printf("Its Sunday!");
        default: 
            printf("Invalid choice!");
        
    }
    return 0;
}