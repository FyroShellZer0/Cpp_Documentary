#include <stdio.h>
/*
enum DAYS {
    //You can assign a value to each 
    //SUNDAY = 1, MONDAY = 2, TUESDAY = 3, WEDNESDAY = 4, THURSDAY = 5, FRIDAY = 6, SATURDAY = 7
    SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY
    //0       1        2         3          4        5       6
};
*/

//YOU CAN COMBINE THIS WITH TYPEDEF
typedef enum Day {
    //You can assign a value to each 
    //SUNDAY = 1, MONDAY = 2, TUESDAY = 3, WEDNESDAY = 4, THURSDAY = 5, FRIDAY = 6, SATURDAY = 7
    SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY
    //0       1        2         3          4        5       6
}Day; // benifit: you dont need to type enum in calling it,you can use "Day today = SATURDAY";
int main() {

    //enums = a user-defined data type that consists of a set of named integer constants
    //benifit: Replaces numbers with readable names

    //we are going to create a variable but the data type is going to be Day
    Day today = MONDAY;
    printf("%d\n", today);

    //heres what we can also do with enums
    if(today == SATURDAY || today == SUNDAY) {
        printf("Its weekend!!\n");
    }
    else {
        printf("Go to school!\n");
    }
    return 0;
}