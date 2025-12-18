#include <stdio.h>

int main() {
    /* WE DISPLAY THE LOOP 3 TIMES
    for(int i = 1; i < 10; i++) {   
        printf("%d", i);
    }
    printf("\n");
    for(int i = 1; i < 10; i++) {   
        printf("%d", i);
    }
    printf("\n");
    for(int i = 1; i < 10; i++) {   
        printf("%d", i);
    }*/ // we repeat the code many times
    


    //WHAT WE CAN DO INSTEAD IS WRITE A LOOP THAT WILL CYCLE THREETIMES AND STICK---
    //for(int i = 1; i < 10; i++) {   
     //   printf("%d", i);
     //printf("\n");
    //} // ----LOOP WITHIN IT
    for (int i = 1; i < 4; i++) { // cycle three times and stop when it reaches 4
        for(int j = 1; j < 10; j++) {   //output      1 2 3 4 5 6 7 8 9 
            printf("%d ", j);           //            1 2 3 4 5 6 7 8 9 
                                        //            1 2 3 4 5 6 7 8 9 
            
            
        }
        printf("\n");
    }
    return 0;
}