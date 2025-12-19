#include <stdio.h>
#include <stdbool.h> //boolean
#include <string.h>
int main() {

    int age = 19;
    //BASIC STRUCTURE
    if (age >= 18) {
        printf("You are expired\n");
    }
    else {
        printf("You are still a minor\n");
    }

    //IF USER INPUT
    int ageInput = 0;
    printf("Enter your age: ");
    scanf("%d", &ageInput);
    if (ageInput >= 18) { // ( >= ) is greater than or equal to,18 will be minor without equal 
        printf("You are expired!\n");
    }
    else if (ageInput < 0){
        printf("You havent been born to reality!\n");
    }
    else if (ageInput == 0){ //direct comparison
        printf("You just got born!\n");
    }
    else {
        printf("You are still a minor!\n");
    }



    //ALSO,IF STATEMENTS STRUCTURE MATTERS ON HOW IT THINKS
    // THE FIRST IF IS THE BASIS
    //IF WE PUT >=18 FIRST,IF WE ENTER 65 WHILE THERES AN >=65,IT MAY EXECUTE THE >=18 FIRST THEN IGNORE THE REST
    int AgeInput = 0;
    printf("Enter your age: ");
    scanf("%d", &AgeInput);
    if (AgeInput >= 65) { // SO BY PROPER STRUCTURE,IF WE PUT 65,IT WILL EXECUTE "OLD" AND IGNORE THE REST IF STATEMENTS
        printf("Youre old as f!\n");
    }
    else if (AgeInput >= 18) { // ( >= ) is greater than or equal to,18 will be minor without equal 
        printf("You are expired!\n");
    }
    else if (AgeInput < 0){
        printf("You havent been born to reality!\n");
    }
    else if (AgeInput == 0){ //direct comparison
        printf("You just got born!\n");
    }
    else {
        printf("You are still a minor!\n");
    }



    //BOOLEAN = either true or false, 1 or 0;
    bool isStudent = true;
    if (isStudent == true) {
        printf("Youre a student!\n");
    } 
    else {
        printf("You are NOT a student!\n");
    }

    //But if is automatically set as true 

    //if = true
    //else = false

    bool isTired = false;
    if (isTired) {
        printf("TAKE A REST!\n");
    }
    else {
        printf("YOU ARE NOT TIRED!\n");
    }

    //ARRAY
    getchar(); // the scanf leaves a newline buffer so the fgets think the enter is the answer
    char name[50] = "";

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0'; //doesnt counts the enter as a character

    if (strlen(name) == 0){ //string length = strlen()
        printf("You didnt type your name!\n");
    }
    else {
        printf("Hello,%s!",name);
    }
    return 0;
}