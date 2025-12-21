#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(void) {
    time_t now = time(NULL);
    struct tm *t = localtime(&now);
    int targetDay = 21;
    int targetMonth = 12;
    int targetYear = 2025;
    if (t->tm_mday == targetDay &&
    t->tm_mon + 1 == targetMonth &&  //? tm_mon = 11 so +1 = 12
    t->tm_year + 1900 == targetYear) { //? tm_year = since 1900
        printf("Today is a special day!\n");
        printf("Nigger!!!\n");
    }
    else {
        printf("Not a special day\n");
        exit(1);
    }
    return 0;
}