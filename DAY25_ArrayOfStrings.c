#include <stdio.h>

int main() {

    char fruits[][10] = {"Apple", 
                         "Banana", 
                         "Coconut", 
                         "Pineapple"}; //10 maximum size
    int size = sizeof(fruits) / sizeof(fruits[0]);

    //replace a of apple with the e,we will access the 2d array od fruits
    fruits[0][0] = 'e';
    fruits[0][4] = 'A';

    fruits[1][5] = 'a';
    fruits[1][0] = 'B';

    fruits[2][0] = 't';
    fruits[2][6] = 'C';

    fruits[3][0] = 'e';
    fruits[3][8] = 'P';
    //output : eppla

    for(int i = 0; i < size; i++) {
            printf("%s\n", fruits[i]);
        
    }
    return 0;
}