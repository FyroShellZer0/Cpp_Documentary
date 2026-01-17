#include <stdio.h>
#include <stdlib.h>

// ALLOCATE 5 INT
int main(void) {
    int num = 5;
    int *p = (int*)malloc(num*sizeof(int));
    if(p == NULL) {
            perror("cannot allocate\n");
            return 1;
        }
    for(int i = 0; i < num; i++) {
        printf("Enter number #%d: ", i+1);
        scanf("%d", &p[i]);
    }
    for(int i = 0; i < num; i++) {
        printf("%d ", p[i]);
    }
    printf("\n");
    free(p);
    return 0;
}