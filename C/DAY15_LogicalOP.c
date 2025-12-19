#include <stdio.h>
#include <stdbool.h>
int main() {
    //logical operators = used to combine or modify boolean expressions.
    // && = AND
    // || = OR
    // ! = NOT

    int TEMP = 10000000;
    if (TEMP > 0) {
        printf("The temperature is good\n"); // since its greater than 0 it will execute "good" and skip the rest 
    }
    else if(TEMP < 25) {
        printf("The temperature is good\n");
    }
    else {
        printf("The temperature is bad\n");
    }

        //so we need to check if its greater than 0 and less than 30 to get the "good" result
        //so we use &&
    // && = AND
    int temp = 20;
    if (temp > 0 && temp < 30) {
        printf("The temperature is good\n");
    }
    else {
        printf("The temperature is bad\n");
    }


    // || = OR
    int temperature = -1;
    if (temperature <= 0 || temperature >= 30) { // one condition needs to be true so we use ||
        printf("The temperature is bad\n");
    }
    else {
        printf("The temperature is good\n");
    }



    bool isSunny = true;
    if (isSunny) {
        printf("Its sunny outside!\n");
    }
    else {
        printf("Its cloudy outside!\n");
    }
    bool isSunnyOutside = false;
    if (!isSunnyOutside) { // reverse the condition = NOT isSunnyOutside
        printf("Its cloudy outside!\n");
    }
    else {
        printf("Its sunny outside!\n");
    }
    return 0;
}