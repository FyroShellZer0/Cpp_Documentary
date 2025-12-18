#include <stdio.h>
#include <time.h>
#include <stdbool.h>
#include <unistd.h> // sleep()


int main() {
    // time_t can hold big number as int has limit 
    time_t rawtime = 0; // jan 1 1970 (Epoch)
    struct tm *pTime = NULL;
    bool isRunning = true;

    printf("Digital Clock\n");
    while (isRunning) {
        time(&rawtime);
        pTime = localtime(&rawtime);
        //printf("%d:%d:%d", (*pTime).tm_hour)
        printf("\r%0.2d:%0.2d:%0.2d", pTime->tm_hour, pTime->tm_min, pTime->tm_sec); //dereference the pointer then give me the current hour 
        fflush(stdout);
        sleep(1);

    }

    return 0;
}