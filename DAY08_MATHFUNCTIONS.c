#include <stdio.h>
#include <math.h> //math library
#include <stdlib.h> // standard library: contains abs(), malloc(), rand(), exit(), etc.

int main() {
    //SQUARE ROOT
    int x = 9;
    x = sqrt(x); //square root
    printf("%d\n", x);

    //POWER
    int y = 9;
    y = pow(x, 3); //9 raise to 2
    printf("%d\n", y);
    
    //ROUND
    float z = 3.66; // 6 is to round up into 4
    z = round(z); // first decimal dependant
    printf("%.3f\n", z);

    //CEIL
    float a = 3.44;
    a = ceil(a); //always round up
    printf("%.2f\n", a);

    //FLOOR
    float b = 3.99;
    b = floor(b); //always round down
    printf("%.2f\n", b);

    //ABSOLUTE
    float c = -3;
    c = abs(c);
    printf("%d\n", c);

    //FLOATING POINT ABSOLUTE
    float fl = -3.56;
    fl = fabs(fl);
    printf("%f\n", fl);

    //LOGIRITHM
    double d = 4;
    d = log(d); // natural logarithm = 4 is 1.3862.. and that is powered by the eulers number 2.71828.. and should give back
    //the base value 4
    printf("%.16lf\n", d);

    double e = 4;
    e = log10(e); //what power do i need to get 4? so its like 10 raise to 0.602059991327..
    printf("%.16lf\n", e);

    

    //TRIGONOMETRY

    //SIN
    double f = 3;
    f = sin(f);
    printf("%.16lf\n", f);

    //COS
    double g = 3;
    g = cos(g);
    printf("%.16lf\n", g);

    //TAN
    double h = 3;
    h = tan(h);
    printf("%.16lf", h);



    return 0;
}
