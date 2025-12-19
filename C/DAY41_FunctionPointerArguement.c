#include <stdio.h>
#include <stdbool.h>
void isFreezing();
bool freeze_C(int temperature);
bool freeze_F(int temperature);
int main() {
    printf("\nCelsius...\n\n");
    isFreezing(freeze_C);
    isFreezing(freeze_C);

    printf("\nFarenheit...\n\n");
    isFreezing(freeze_F);
    isFreezing(freeze_F);
    return 0;
}
// call back function
void isFreezing(bool(*freezeCheck)(int)) {    // freezeCheck is a pointer to a function that accepts int
                                              // as an arguement and return true or false                                                                                                                                                                          
    int temperature = 0;
    
    printf("Enter temperature: ");
    scanf("%d", &temperature);
    if(freezeCheck(temperature))
        printf("Its freezing!\n");
    else
        printf("Its not freezing\n");
}
bool freeze_C(int temperature) {
    if (temperature <= 0) return true;
    else return false;
    
}
bool freeze_F(int temperature) {
    if (temperature <= 2) return true;
    else return false;
}