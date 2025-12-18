#include <stdio.h>
int add(int x, int y);
int subtract(int x, int y);
int multiply(int x, int y);
int divide(int x, int y);
int (*select_option())(int , int); // the function itself

int main() {
    int (*operation) (int , int) = select_option();
    printf("answer: %d\n", operation(20, 5));
    return 0;
}
int add(int x, int y) {
    return x + y;
}
int subtract(int x, int y) {
    return x - y;
}
int multiply(int x, int y){
    return x * y;
}
int divide(int x, int y) {
    return x / y;
}
int (*select_option())(int , int){
    int option = 0;
   
    printf("Select an option\n");
    printf("1. add\n");
    printf("2. subtract\n");
    printf("3. multiply\n");
    printf("4. divide\n");
    printf("Enter option: ");
    scanf(" %d", &option);

    if (option == 1) return add;
    else if(option == 2) return subtract;
    else if(option == 3) return multiply;
    else if(option == 4) return divide;
    else return NULL;
    
}