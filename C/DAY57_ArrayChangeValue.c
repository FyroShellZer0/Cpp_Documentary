#include <stdio.h>

int main(void) {
    int index;
    int change;
    
    int age[5] = {12, 19, 22, 15, 30};
    int n = sizeof(age)/sizeof(age[0]);
    for(int i = 0; i < n; i++) {
        printf("%d ", age[i]);
    }
    printf("\n");
    // age[0] = 16;
    printf("Enter what index to change: ");
    scanf("%d", &index);
    getchar();
    switch(index) {
        case 0:
            printf("Enter age to change the index 0: ");
            scanf("%d", &change);
            getchar();
            age[0] = change;
            break;
        case 1: 
            printf("Enter age to change the index 1: ");
            scanf("%d", &change);
            getchar();
            age[1] = change;
            break;
        case 2:
            printf("Enter age to change the index 2: ");
            scanf("%d", &change);
            getchar();
            age[2] = change;
            break;
        case 3:
            printf("Enter age to change the index 3: ");
            scanf("%d", &change);
            getchar();
            age[3] = change;
            break;
        case 4:
            printf("Enter age to change the index 4: ");
            scanf("%d", &change);
            getchar();
            age[4] = change;
            break;
    }
    
    for(int i = 0; i < n; i++) {
        printf("%d ", age[i]);
    }
    return 0;
}