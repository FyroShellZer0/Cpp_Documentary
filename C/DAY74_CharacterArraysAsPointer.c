#include <stdio.h>
#include <string.h>
int main(void){
    
    //char C[4];
    char C[4];
    C[0] = 'J';
    C[1] = 'O';
    C[2] = 'H';
    C[3] = 'N';
    //!  0  1  2  3  4
    //! [J][O][H][N][?]   \0??
    //! can return weird behavior = JOHN-;'-


    //C[4] = '\0';
    int len = strlen(C);
    printf("name: %s, length: %d\n", C, len);
    //? WHATS BEST TO DO IS

    char D[20];
    D[0] = 'D';
    D[1] = 'A';
    D[2] = 'N';
    D[3] = 'E'; 
    D[4] = '\0';  //! it stops at null terminator 
    int dlen = strlen(D);
    printf("name: %s, length: %d\n", D , dlen);

    //! SIMPLE 
    char c[5] = {'j', 'o', 'h', 'n', '\0'}; //! manual string

    char d[] = "Dane"; //! best overall

    //! NEVER DO THIS
    char a[4] = "john"; //! overflow
    return 0;
}