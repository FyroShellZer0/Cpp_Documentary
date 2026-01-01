#include <stdio.h>

int main(void) {
    //! Arrays and pointers are different types that are used in similar manner
    //     200 201 202 203 204 205
    //? c1  H   e   l   l   o   \0
    char c1[6] = "Hello"; 

    // POINTER = //! 8 BYTES
    //         _
    //        |_|
    //? c2 =  400
    char *c2;
    c2 = c1; // stores the c1[0] in c2
    //  C2 = 200
    //? 400
    c2[2] = 'Z';
    printf("%c\n", c2[2]);


    printf("%c\n", c2[3]); //! WHY WE ARE ABLE TO ACCESS 1, 2, 3, 4, 5? IF *c2 = c1(c1[0])?
    //! because *(c2 + 2) move 2 bytes = 'l'
    //? visualization
    //! c2[i] = *(c2 + i);
    //! c1[i] = *(c1 + i);


    //! important notes!
    //! c1 = c2; WRONG
    //! c1 = c1+1; WRONG
        //! you can only do pointer aritmetic
        //! c2++;


    return 0;
}