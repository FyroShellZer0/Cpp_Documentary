#include <stdio.h>

int main(void) {
    //! perror = perror (Print Error) converts error codes into 
    //! human-readable messages using the global errno variable MORE EASY TO UNDERSTAND
    FILE *file = fopen("nonexistingfile.txt", "r");
    if(!file) {
        perror("Cannot open file..");
        return 1;
    }

    return 0;
}