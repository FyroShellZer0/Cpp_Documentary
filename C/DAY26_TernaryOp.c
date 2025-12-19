#include <stdio.h>
#include <stdbool.h>
#include <time.h>
int main() {

    //ternary operator ? = SHORT HARD FOR IF-ELSE STATEMENTS

    //(condition) ? value_if_true : value_if_false
    int x = 5;
    int y = 4;
    int max = (x > y) ? x : y; //ternary

    printf("%d\n", max);


    bool isOnline = true;
    printf("%s", (isOnline) ? "User is online\n" : "user offline\n");

    bool isRaining = false;
    printf("%s", (isRaining) ? "Take an umbrella\n" : "Go outside freely\n");

    int number = 8;
    printf("%d is %s", number, (number % 2 == 0) ? "Even\n" : "Odd\n");

    int age = 16;
    printf("%s", (age > 18) ? "you are an adult!\n" : "You are a minor\n");

    int temperature = 25;
    printf("%s", (temperature > 28) ? "Its too hot!\n" : "Its  too cold\n");
    int hours = 11;
    int minutes = 30;
    char *meridiem = (hours < 12) ? "AM" : "PM";
    printf("%02d:%02d %s", hours, minutes, meridiem);
    return 0;
}