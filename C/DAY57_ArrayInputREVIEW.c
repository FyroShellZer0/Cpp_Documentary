#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int age[5];
    int n = sizeof(age) / sizeof(age[0]);
    for (int i = 0; i < n; i++) {
        printf("Enter age %d: ", i+1);
        scanf("%d", &age[i]);
        getchar();
    }
    printf("Final ages:");
    for (int i = 0; i < n; i++) {
        printf("%d ", age[i]);
    }
    printf("\n");
    return 0;
}