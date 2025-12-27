#include <stdio.h>
#include <string.h>
void printName(char* name){
    int len = strlen(name);
    printf("name: %s, length: %zu\n", name, len);

}
void newprintName(char* name) {
    int len = strlen(name);
    printf("N:name: %s, N:length: %zu\n", name, len);
}
int main(void) {
    //! String = a group of characters. ex. "john", "hello there", etc.
    //! how to store strings: 
    //! 1. The character array should be large enough
    //! size >= size of characters in the string + 1 
    //   0 1 2 3 = //? 4 BYTES
    //! "j o h n" = 4 + 1 = 5
    char name[5] = "john";
    printf("name: %s\n", name);
    //! why we need extra character?
    char name2[8];
    name2[0] = 'J';
    name2[1] = 'o';
    name2[2] = 'h';
    name2[3] = 'n';
    //  0 1 2 3 4 5 6 7
    //! j o h n ? ? ? ?
    //! we have NOT stored information that character 'n' is the last character in the string
    //! so if we pass the string to a function that has to print/find the length of the string 
    //! stored in this array, then how would the function know that this string ends at 
    //! index [3]?
    printName(name2); //! name: John�, length: 6- 2 more non-printable character
    //! in memory before \0
    
    printf("index[6]: %c\n", name2[6]);
    
    //? TO FIX THIS, WE PUT A NULL TERMINATOR AFTER THE LAST CHARACTER
    //  0 1 2 3 4 5 6 7
    //! j o h n \0
    name2[4] = '\0';
    newprintName(name2);


    
    return 0;

}