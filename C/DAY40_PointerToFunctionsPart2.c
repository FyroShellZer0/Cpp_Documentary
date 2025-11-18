#include <stdio.h>

double add(double x, double y);
 int main() {       
    //pointer to functions that return value
    double (*add_pointer)(double, double) = &add;// pointer to a function that accepts double arguement
                                            // you can also assign the function memory address
    double a = 5;
    double b = 5;
    double result = add_pointer(a,b);
    printf("result: %.2lf\n", result);
    return 0;
}
double add(double x, double y) {
    return x + y;
}   