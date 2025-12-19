#include <stdio.h>

int main() {
    //break = break out of a loop(STOP)
    //continue = skip current cycle of a loop (SKIP)
    
    /*
    for(int i = 1;i <= 10; i++) {
        printf("%d\n", i);
    } */
   //what if we want (if i == 4, we want to break out of the loop)

   for(int i = 1;i <= 10; i++) {

    if (i == 4) {
        break;
    }
        printf("%d\n", i); 
    }
    return 0;
}