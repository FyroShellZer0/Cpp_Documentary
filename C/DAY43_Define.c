
#include <stdio.h>

#define x 5 //constant || NOT a variable || replaces the text where its called before compilation
#define PI 3.14159
#define SQUARE(x) (x) * (x) //SQUARE IS A FUNCTION
int main(void) {
    int i = x;
    printf("%d\n", i);
    double radius = 5.0;
    double area = PI * radius * radius; //  3.14159 * radius * radius
    printf("%.2lf\n", area);
    int result = SQUARE(5 + 6); // (5 + 6) * (5 + 6); 
    
    printf("%d\n", result);
    


    return 0;
}