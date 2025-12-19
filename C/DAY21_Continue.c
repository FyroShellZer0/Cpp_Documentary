#include <stdio.h>

int main() {
    //break = break out of a loop(STOP)
    //continue = skip current cycle of a loop (SKIP)
    
    /*
    for(int i = 1;i <= 10; i++) {
        printf("%d\n", i);
    } */
   //

   for(int i = 1;i <= 10; i++) {

    if (i == 4) { // when the loop is == 4,it will skip 4 and proceed to 5;
        continue;
    }
        printf("%d\n", i); 
    }
    return 0;
}