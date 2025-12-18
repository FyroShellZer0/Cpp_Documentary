#include <stdio.h>
double cube(double num) {
    return num * num * num;
}

int square(int numberReceived) { // were working with whole numbers,were going to return an int so we replace void with int
    //int result = num * num;
    //return result; // if we are returning a value or a variable, we have to list the data type of what were returning
    return numberReceived * numberReceived; // local variable
}
int main() {    

    int x = square(2); // the computer sends 2 to the function(x = 2) then calculates num * num returns that 4
    //stores it at variable x to be printed
    int y = square(3);
    int z = square(4);//we are argueing with the function square

    printf("%d\n", x);
    printf("%d\n", y);
    printf("%d\n", z);
    
    double a = cube(2); // we are argueing with the function cube
    double b = cube(3);
    double c = cube(4);
    printf("%.2lf\n", a);
    printf("%.2lf\n", b);
    printf("%.2lf\n", c);

    return 0;
} 