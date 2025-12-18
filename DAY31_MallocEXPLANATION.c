#include <stdio.h>
#include <stdlib.h>
int main() {

    // malloc() = A function in C that dynamically allocates
    // a specified number of bytes in memory

    // 5 GRADES
    char grades[5] = {0}; 
    // WHAT IF WE DONT KNOW THE NUMBER OF ELEMENTS WE NEED UNTIL AFTER
    // THE PROGRAM IS RUNNING WHERE A USER IS GOING TO TYPE HOW MANY GRADES
    // THEY HAVE.

    //SO WE WILL RETURN A POINTER FROM THE MALLOC

    char *Grades = malloc(100); // WE HAVE TO PASS IN A NUMBER OF BYTES THAT WE WOULD LIKE
    // TO RESERVE IN MEMORY 
    //EX. LIKE I WOULD LIKE 100 BYTES 


    //RATHER THAN HARD CODING A NUMBER, WERE GONNA ASK A USER HOW MANY ELEMENTS THEY WANT TO ENTER IN.
    //THEN WE'LL MULTIPLY THE SIZE OF THE CHARACTER

    //NORMALLY A CHAR IS 1 BYTE
    //IN MOST SYSTEMS,AN INTEGER IS 4 BYTES SO IF WE NEED 6 SCORES,*4 THAT WOULD BE 24 BYTES
    //BASICALLY WERE GOING TO CALCULATE HOW MUCH SIZE WE NEED
    //HOW MUCH SPACE IN MEMORY ARE WE GOING TO RESERVE 


    //FOR EXAMPLE:
    int number = 0;
    printf("Enter number of grades:");
    scanf("%d", &number);

    char *Grade = malloc(number * sizeof(char));
    
    
    //incase char *Grade = malloc(number * sizeof(char)); fails for some reason,its going to return a value of null
    //we should check that because if we dereference a null pointer,its dangerous
    //it can cause a segmentation fault
    
    if (Grade == NULL) {
        printf("Memory allocation failed!\n");
        return 1;

    }
    

    //ITS FROM A LOCATION KNOWN AS THE HEAP
    //FOR MOST SITUATIONS WHEN WE USE MEMORY,ITS FROM A PLACE CALLED THE STACK
    //WERE GOING TO BE BORROWING OR RENTING SPACE FROM THE HEAP.

    //WHEN WE NO LONGER NEED THE SPACE WE USED ,WE HAVE TO RETURN THE RENTED MEMORY 
    free(Grade);

    //WE ALSO HAVE TO RESET THE POINTER INTO NULL
    Grade = NULL; // avoids dangling pointers = points to a memory that we are not using anymore

    //incase char *Grade = malloc(number * sizeof(char)); fails for some reason,its going to return a value of null
    //we should check that because if we dereference a null pointer,its dangerous
    //it can cause a segmentation fault
    
    
    for (int i = 0; i < number; i++) {
        printf("Enter grade #%d", i + 1);
        scanf("%c", &Grade[i]);
    }
    for (int i = 0; i < number; i++) {
        printf("%c ", Grade[i]);
    }
    return 0;
}