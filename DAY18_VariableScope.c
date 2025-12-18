#include <stdio.h>
//int result = 0; // global scope/not good practice(hard to debug)
int add(int x, int y) {
    int result = x + y;
    return result;

}
int subtract (int x, int y) {
    int result = x - y;
    return result;
}
int multiply (int x, int y) {
    int result = x * y;
    return result;
}
int main() {


    //variable scope = refers to where a variable is recognized and accessible.
    //variables can share the same name if they are in different scopes {}
/*
    int result = 0;
    int result = 1;
    ERROR, THERE IS A PREVIOUS RESULT,VARIABLES IN THE SAME SCOPE CANT SHARE THE SAME NAME
    */
    
    
    //BUT IF THE VARIABLES IS IN DIFFERENT SCOPE,THEY CAN REUSE THE SAME NAME

    //---------------------------------------------------------
    int result = multiply(5, 5);
    printf("%d", result);
    // result are in different scope and they share the same name/they can have the same name as long as
    //theyre on different scope {}
    return 0;
}