#include <stdio.h>

typedef int numbers;
typedef char String[50]; //we also have to specify a size in C lets put 50 
typedef char initials[3];//ACTS AS "JB\0";
int main() {
        //typdef = reserved keyword that gives existing data type a "nickname"
        //helps simplify complex types and improves code readability 
        //typedef existingType newName;

        numbers x = 3;
        numbers y = 4;
        numbers z = x + y;
        printf("%d\n", z);
        //WHAT IF WE CAN RENAME INT

        String name = "Jen"; //NOW,String[50] PUTS THE SIZE AND NOW YOU DONT NEED TO PUT THE []
        printf("%s\n", name);

        //lets use typedef to give a name to an array of characters that can hold 2 characters
        initials user1 = "JB";
        initials user2 = "SS";
        initials user3 = "PT";
        initials user4 = "ST";

        printf("%s\n", user1);
        printf("%s\n", user2);
        printf("%s\n", user3);
        printf("%s\n", user4);
    return 0;
}