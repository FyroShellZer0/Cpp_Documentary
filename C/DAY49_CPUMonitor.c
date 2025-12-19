#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <stdlib.h>
int CPU(void);
int main(void) {
    int alerted = 0;
    while (1) {
        time_t now;
        time(&now);
        printf("time: %s", ctime(&now));
        //int temp = CPU() / 1000;
        int temp = 81;
        printf("temperature: %d°C\n", temp);
        FILE *log = fopen("CPUtemp.log", "a");
        fprintf(log, "Temp: %d°C\n Time : %s\n", temp, ctime(&now));
        fclose(log);
        log = NULL;
        
        if (temp > 80 && !alerted) {
            system("notify-send 'CPU WARNING' 'OVERHEATING'");
            alerted = 1;    
        }
        else if (temp <= 80) {
            alerted = 0;
        }
        sleep(60);
    }
    return 0;
}

int CPU(void){
    int temperature = 0;
    FILE *CPU = fopen("/sys/class/thermal/thermal_zone0/temp", "r");
    if (CPU == NULL) {
        printf("Cannot open sys/class/thermal/thermal_zone0/temp\n");
        return 1;
    }
    fscanf(CPU, "%d", &temperature);
    fclose(CPU);
    CPU = NULL;
    return temperature;
}