#include <stdio.h>
#include <stdbool.h>
int main() {
    float price = 10.00;
    bool isStudent = true; // 10% discount
    bool isSenior = true; // 20% discount

    //student & senior 30% discount
    /*
    if (isStudent) {
        printf("You got a student discount of 10%\n");
        price *= 0.9;
    }
    if (isSenior) {
        printf("You got a senior discount of 20%\n");
        price *= 0.8;
    }
     //NOTICE!
        if both where student and also senior it will return 7.20
        because were taking 20% discount of 9 dollars(discounted student) rather than 10

        so we use if statements
    
    
    
    */

    if (isStudent) { // if its student,it will enter the first if statement
        if (isSenior) { //while inside isStudent if statement it will look if its also a senior
            printf("You got a student discount of 10%\n"); // if yes it will execute the nested if
            printf("You got a senior discount of 20%\n");
            //price = price * 0.7;
            price *= 0.7;
        }
        else {
            printf("You got a student discount of 10%\n"); // if not it will just execute its student discount
            price *= 0.9;
        }


    }
    else { // back to first if statements,or else if its only senior 
        if (isSenior) { //it will execute senior discount
            printf("You got a senior discount of 20%\n");
            //price = price * 0.7;
            price *= 0.8;
        }
    }
    
    printf("The price of a ticket is $%.2f\n", price); //print the price

/*  SAME RESULT IF WE SWITCH THE VARIABLES
    if (isSenior) { // if its student,it will enter the first if statement
        if (isStudent) { //while inside isSenior if statement it will look if its also a student
            printf("You got a student discount of 10%!\n"); // if yes it will execute the nested if
            printf("You got a senior discount of 20%!\n");
            //price = price * 0.7;
            price *= 0.7;
        }
        else {
            printf("You got a senior discount of 20%\n"); // if not it will just execute its senior discount
            price *= 0.8;
        }


    }
    else { // back to first if statements,or else if its only student
        if (isStudent) { //it will execute student discount
            printf("You got a student discount of 10%\n");
            price *= 0.9;
        }
    }
    
    printf("The price of a ticket is $%.2f\n", price); //print the price
*/

//SUMMARY!
/*NESTED IF STATEMENTS ARE LIKE EXTENDED IF STATEMENTS 
IF ITS THIS,IS IT ALSO THIS? OR ELSE JUST DO THE FIRST CONDITION*/
    return 0;
}