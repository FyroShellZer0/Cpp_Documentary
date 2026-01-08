#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>
// yellow - 3-6 sec
// red/green 30-120 sec
//!#define yellowTime 3
//!#define redTime 30
//!#define greenTime 30
//!static = cant be modified in other files
static const int yellowTime = 3;
static const int redTime = 30;
const int greenTime = 30;
void trafficLights(void){

    for(int i = redTime; i > 0; i--) {
        printf("Stop: %d\n", i);
        sleep(1);
    }
    
    for(int i = yellowTime; i > 0; i--) {
        printf("Wait: %d\n", i);
        sleep(1);
    }
    for(int i = greenTime; i > 0; i--) {
        printf("Go: %d\n", i);
        sleep(1);
    }
}
int main(void) {
    printf("Traffic lights\n");
    while(true) {
        trafficLights();
    }
    return 0;
}