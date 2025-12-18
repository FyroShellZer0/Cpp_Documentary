#include <stdio.h>
#include <stdbool.h>
int main() {
    /*
    variable = a reusable container for a value.
    behaves as if it were the value it contains.
    */

    //integer variable (%d)
    int age = 16;
    int year = 2009;
    int day = 22;
    int quantity = 2;
    printf("you are %d years old!\n", age);
    printf("the year is %d \n", year);
    printf("day of birth is %d \n", day);
    printf("you have ordered %d piece of steak\n", quantity);

    //decimal float (%f)
    float cost = 49.9;
    float tax = 2.51;
    float tip = 5.5;
    printf("\nthe steak cost is $%.1f\n",cost);
    printf("with the tax of $%.2f\n", tax);
    printf("you gave a tip of $%.1f", tip);

    //decimal double (%lf)
    double x = 9.0000000000123456;
    printf("\nthe x value is %.16lf", x);

    //char 
    char grade = 'A';
    char middle_name = 'O';
    char symbol = '$';
    printf("\nyou got %c in exams!\n", grade);
    printf("your middle name is %c", middle_name);
    printf("\nyour symbol is %c\n", symbol);

    //array char
    char name[] = "\njen";
    char month[] = "march";
    char car[] = "porche";
    char food[] = "tinola";
    char car_model[] = "porche 911 gt";
    char email[] = "sample@gmail.com";
    printf("your name is %s\n", name);
    printf("you were born in %s\n", month);
    printf("your favorite food is %s\n", food);
    printf("your favorite car brand is %s\n", car);
    printf("the car model you want is %s", car_model);
    printf("\nyour gmail is %s\n", email);

    //BOOLEAN
    //INCLUDE <stdbool.h>
    //bools are binary-either true or false 1,0
    bool isOnline = true;
    printf("%d\n",isOnline);
    
    //SITUATION TO USE BOOLEAN
    if (isOnline){
        printf("you are online,welcome!\n");
    }
    else{
        printf("you are offline\n");
    }


    bool isStudent = false;
    if (isStudent){
        printf("You are a student\n");
    }
    else{
        printf("you are not student\n");
    }

    bool rfid = true;
    if (rfid){
        printf("RFID confirmed,please proceed.\n");
    }
    else{
        printf("RFID denied,please try again later.\n");
    }


        //SUMMARY!

        /*
        variable is a reusable cotainer for a value. it behaves as if it were the value it contains
        int = whole numbers(4 bytes in a modern systems) [%d]
        float = single precision decimal number (4 bytes) [%f]
        double = double precision decimal number(8 bytes)[%lf]
        char = single character [%c]
        char[] = array of characters or string [%s]
        bool = true or false (1 byte,requires <stdbool.h>) [%d]
        */
    return 0;
}
