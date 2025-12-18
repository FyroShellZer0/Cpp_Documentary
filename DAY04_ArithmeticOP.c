#include <stdio.h>

int main() {

    //arithmetic operators = + - * / % ++ --

    //ADDITION
    int a = 2;
    int b = 3;
    int c = 0;
    c = a + b;
    printf("%d\n", c);

    //SUBTRACTION
    int d = 2;
    int e = 3;
    int f = 0;
    f = d - e;
    printf("%d\n", f);

    //MULTIPLICATION
    int g = 2; 
    int h = 3;
    int i = 0;
    i = g * h;
    printf("%d\n", i);

    //DIVISION
    float j = 2;
    float k = 3;
    float l = 0;
    l = j / k;
    printf("%f\n", l);

    //MODULUS = remainder of division

    int m = 20;
    int n = 6; // remainder:2
    int o = 0;
    o = m % n;
    printf("%d\n", o);

    //INCREMENT ++
    int p = 1;
    p++;
    printf("%d\n", p);
    
    //DECREMENT --
    int q = 2;
    q--;
    printf("%d\n", q);


    //AUGMENT   
    
    //ADD
    float r = 10;
    r+=3; //  r = 10 + 3;
    printf("%f\n", r);

    //SUB
    int s = 10;
    s-=3; // s = 10 - 3;
    printf("%d\n", s);

    //MUL
    int t = 10;
    t*=3; //t = 10 * 3; 
    printf("%d\n", t);

    //DIV
    int u = 10;
    u/=3; // u = 10/3;
    printf("%f\n", u);

    return 0;
}
