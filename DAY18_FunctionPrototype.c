#include <stdio.h>
#include <stdbool.h>

void hello(char name[], int age); // FUNCTION PROTOTYPE,WERE TELLING THE COMPUTER THE NAME,RETURN TYPE AND THE PARAMETERS
//OF THE FUNCTION,WHICH WE DEFINE LATER

bool ageCheck(int age);


int main() {
    /*
    
    Function prototype = provide the compiler w/ information about a functins name, return type and parameters before its actual
    definition.
    Enables type checking adn allows functions to be used before theyre defined
    Improves readability,organization, and helps prevent errors.
    */
    
    hello("jen", 16);

    
    if (ageCheck(15)) {
        printf("You are old enough to work at krusty krab\n");
    }
    else {
        printf("You must be 16+ to work at the krusty crab\n");
    }
    
    //WITH C PROGRAMS,WE READ IT FROM THE TOP-DOWN

    //ITS NICE FOR OUR MAIN FUNCTION TO BE AT THE TOP BECAUSE IT DRIVES OUR PROGRAM
    return 0;
}
void hello(char name[], int age) { //return type | name | (parameters)
    printf("Hello, %s\n", name);
    printf("You are %d years old\n", age);

} 

bool ageCheck(int age) {
    /*if (age >= 16) {
        return true;
    }
    else {
        return false;
    }*/
   return age >= 16; // short cut
}

