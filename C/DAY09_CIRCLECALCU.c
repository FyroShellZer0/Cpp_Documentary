#include <stdio.h>
#include <math.h>
int main() {

    double radius = 0.0;
    double area = 0.0;
    double surfaceArea = 0.0;
    double volume = 0.0;
    const double PI = 3.14159; //constant varibles makes a variable frozen and cant be changed while the program runs
    //perfect for PI,SPEED OF LIGHT,GRAVITATIONAL CONSTANT and also for variables you dont wanna change or want to
    //stay frozen,also great practice to make it big letter.

    printf("Enter the radius: ");
    scanf("%lf", &radius);

    area = PI * pow(radius, 2);
    surfaceArea = 4 * PI * pow(radius, 2);
    volume = (4.0/3.0) * PI * pow(radius, 3); // decimal by .0 to avoid integer division and it should be inside a parenthesis
    printf("Area: %.3lf\n", area);
    printf("Surface Area: %.3lf\n", surfaceArea);
    printf("Volume: %.3lf", volume);

    return 0;
}
