#include <stdio.h>
#include <string.h> //string library
int main() {
    int age = 0;
    float money = 0.0f; // tells that the money should be a floating point
    char symbol = '\0'; //null terminator
    char name[20] = "";
    char fullname[20] = "";
    char mothername[20] = "";

    //INT AGE
    printf("enter your age:");
    scanf("%d", &age);// % at the address of our variable age

    //FLOAT MONEY
    printf("how much money do you have:");
    scanf("%f", &money);
    

    //CHAR SYMBOL
    printf("whats your favorite symbol:");
    scanf(" %c", &symbol); //clear the input buffer by putting space before %c
    

    //ARRAY STRING NAME
    printf("enter your first name:");
    scanf(" %s", name);
    
    //ARRAY STRING FULL NAME
    getchar(); //clear the \n buffer with the input buffer
    printf("enter your full name:");
    fgets(fullname, sizeof(fullname), stdin); // gets all whats in the line including the enter so when printing,it will have a space
    fullname[strlen(fullname) - 1] = '\0'; // to fix it,you need to call the variable[strlen(variable) = 1] = '\0'; null terminator.
    
    //ARRAY STRING MOTHER NAME
    printf("enter your mothers name:");
    fgets(mothername, sizeof(mothername), stdin);
    mothername[strlen(mothername) - 1] = '\0';
    //PRINT
    printf("%s\n", fullname);
    printf("%s\n", mothername);
    printf("%d\n", age);
    printf("%.2f\n", money);
    printf("%c\n", symbol);
    printf("%s\n", name);


    /*      SUMMARY!
    scanf( );  = for int,floating points and char and sometimes array when it doesnt contain spaces

    fgets(variable,sizeof(variable), stdin);  = (fgetstring) is for string/array that contains spaces
    -but also it prints the enter so it has a space in between and can be solved by variable[strlen(variable) - 1] = '\0';

    getchar(); is to clear the \n to avoid buffer
    

    */


    
    return 0;
}
