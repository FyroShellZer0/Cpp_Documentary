#include <stdio.h>
#include <unistd.h> // linux
int main() {
    /*
    for(int i = 10; i >= 0; i--) {
        printf("%d\n", i);
    }
    printf("HAPPY NEW YEAR!");
    */

    // we can have our program sleep after 1 second between each cycle
    for(int i = 10; i >= 0; i--) {
        sleep(1); //linux reads it as seconds windows is Sleep(1000) which is 1000 miliseconds
        printf("%d\n", i);
    }
    printf("HAPPY NEW YEAR!");
    return 0;
}