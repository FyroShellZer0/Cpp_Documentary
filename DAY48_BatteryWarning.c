#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <time.h>
int getBatteryLevel(void);
int main() {
    getBatteryLevel();
    int lowAlert = 0;
    int highAlert = 0;
    while (1) {
        int percentage = getBatteryLevel();
        //int percentage = 14;
        //int percentage = 91;
        printf("Battery: %d\n", percentage);
        time_t now;
        time(&now);
        printf("Time: %s", ctime(&now));

        printf("\n");
        FILE *log = fopen("battery.log", "a");
        if (log) {
            fprintf(log, "%s battery: %d%%", ctime(&now), percentage);
            fclose(log);
        }
        
        if (percentage < 15 && !lowAlert) {
            system("notify-send -u critical -t 0 'LOW BATTERY ' 'PLUG YOUR CHARGER NOW!.'");
            lowAlert = 1;
        }
        else if (percentage >= 15) {
            lowAlert = 0;
        }

        if (percentage > 90 && !highAlert){
            system("notify-send -u critical -t 0 'BATTERY 90%' 'UNPLUG THE CHARGER NOW!.'");
            highAlert = 1;
        }
        else if(percentage <= 90){
            highAlert = 0;
        }
        sleep(60);
    }   
    return 0;
}
int getBatteryLevel(void) {
    FILE *level = fopen("/sys/class/power_supply/BAT0/capacity", "r");
    if (!level) return -1;

    int percentage;
    fscanf(level, "%d", &percentage);   
    fclose(level);
    level = NULL;

    return percentage;
}
