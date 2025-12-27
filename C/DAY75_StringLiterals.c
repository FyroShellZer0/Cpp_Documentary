#include <stdio.h>
#include <string.h>
void check(char* name){
    int len = strlen(name);
    printf("name: %s, length: %zu, ", name, len);
}
int main(void) {
    char name0[8];
    name0[0] = 'j';
    name0[1] = 'o';
    name0[2] = 'h';
    name0[3] = 'n';
    check(name0);
    printf("bytes: %zu\n", sizeof(name0));
    //! instead of writing these characters individually,
    //! we could have use string literals
    char name1[8] = "john"; //!this is always stored with a null termination in the memory
    //! we can could also avoid writing the size here
    check(name1);
    printf("bytes: %zu\n", sizeof(name1));
    //? BEST PRACTICE
    char name2[] = "john";
    check(name2);
    printf("bytes: %zu\n", sizeof(name2));

    //! one more syntax of initialization, we can pull these characters as a comma
    //! separated list
    char name3[] = {'j', 'o', 'h', 'n'}; //! BUT null terminiation is not implicit
    check(name3); // OUTPUT: johnjohn //! weird output
    printf("bytes: %zu\n", sizeof(name3));

    char name4[] = {'j', 'o', 'j', 'n', '\0'};
    check(name4);
    printf("bytes: %zu\n", sizeof(name4));
    return 0;
}