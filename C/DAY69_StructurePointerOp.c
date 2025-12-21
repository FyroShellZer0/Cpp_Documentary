#include <stdio.h>
#include <time.h>
struct person{
    int age;
};
int main(void) {
    struct person p;
    struct person *ptr = &p;

    p.age = 20; //! only works when you have struct
    ptr->age = 20; //! “Go to the struct that this pointer points to, 
    //!                                        then access a member
    
    time_t now = time(NULL);
    struct tm *t = localtime(&now);
    if (t->tm_mday == 22) {
        printf("Today is a special day!\n");
        printf("hour: %d\n", t->tm_hour);
        printf("minute: %d\n", t->tm_min);
        printf("Seconds: %d\n", t->tm_sec);
    }
    else {
        printf("Today is NOT a special day\n");
    }
    

    return 0;
}