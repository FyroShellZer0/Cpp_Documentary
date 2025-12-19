#include <stdio.h>

int main() {
    //for loop = repeat some code at limited amount of times
    //  for(initialization; condition; update)

    /*
    for(int i = 0; i < 100; i++) {
        printf("%d\n", i);
    }
        */
    for(int i = 1; i <= 10; i++) { // starts at 1, 1 < 100 → stops before 100     1 <= 100 → stops at 100
        printf("%d\n\n", i);
    }
    
    //count by two's
    for(int x = 2; x <= 10; x+=2) {
        printf("%d\n", x);
    }
    //count by three
    for (int y = 3; y <= 12; y+=3) {
        printf("%d\n\n\n", y);
    }
    
    //if we want to countdown
    for(int z = 10; z >= 1; z--){ // can also count down by z-=2 or z-=3
        printf("%d\n", z);
    }
    return 0;
}
