#include <stdio.h>
#include <string.h>
int main() {
    //variables
    char item[50] = "";
    float price = 0.0f;
    int quantity = 0;
    char currency = '$';
    float total = 0.0f;

    //array/string asking what item
    printf("what item do you want to buy?: ");
    fgets(item, sizeof(item), stdin);
    item[strlen(item) - 1] = '\0'; //remove the extra new line from fgets

    //floating point price
    printf("what is the price for each:: ");
    scanf("%f", &price);

    //int quantity
    printf("how many item are you buying?: ");
    scanf("%d", &quantity);

    //total item*quantity
    total = price * quantity; //3 pizza $10* 30 = $30 
    printf("you have bought %d %s!\n", quantity, item);
    printf("total: %c%.2f\n", currency, total);

    /*
    SUMMARY!

    = I MADE A SHOPPING CART.
    FIRST I MADE THE VARIABLES TO USE.

    THEN I MADE THE VARIABLE ITEM TO ASK WHAT TO BUY 
    AND SINCE ITS AN ARRAY AND COULD CONTAIN SPACE,I USED FGETS AND 
    FOLLOWED BY NEWLINE REMOVER BUFFER.

    THIRD IS I MADE THE PRICE VARIABLE,ITS A FLOATING POINT AND JUST
    NORMAL VARIABLE CALLING

    NEXT IS QUANTITY,AND ITS JUST NORMAL VARIABLE CALLING

    LASTLY I MADE THE TOTAL VARIABLE SO THE PRICE WILL BE MULTIPLIED 
    BY THE QUANTITY I BOUGHT AND IT WILL BE PRINTED 

    NOTE!!!! - YOU CAN USE MULTIPLE VARIABLES IN 1 LINE BY CALLING IT
    AND PUTTING A COMMA JUST LIKE THESE LINES

    printf("you have bought %d %s!\n", quantity, item);
    printf("total: %c%.2f\n", currency, total);
    
    */
    return 0;
}
