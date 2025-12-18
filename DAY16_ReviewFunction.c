#include <stdio.h>
#include <stdbool.h>


bool targetDay(bool ouchday, bool painday, bool happyday, bool okayday, bool comfortableday, bool painfulday) {
    if (ouchday && painday && happyday && okayday && comfortableday && painfulday) {
        printf("Today,You are going to target your whole body!\n");
    }
    else {
        if (ouchday && !painday && !happyday && !okayday && !comfortableday && !painfulday) {
            printf("Today, You are going to target your arms!\n");
        }
        else if (!ouchday && painday && !happyday && !okayday && !comfortableday && !painfulday) {
            printf("Today, You are going to target your legs!\n");
        }
        else if (!ouchday && !painday && happyday && !okayday && !comfortableday && !painfulday) {
            printf("Today, You are going to target your chest!\n");
        }
        else if (!ouchday && !painday && !happyday && okayday && !comfortableday && !painfulday) {
            printf("Today, You are going to target your back!\n");
        }
        else if (!ouchday && !painday && !happyday && !okayday && comfortableday && !painfulday) {
            printf("Today, You are going to target your lats!\n"); 
        }
        else if (!ouchday && !painday && !happyday && !okayday && !comfortableday && painfulday) {
            printf("Today, You are going to target your core!\n");
        }
        else {
            printf("You dont have muscle to target today!\n");
        }
    }
}
int main() {
    bool armDay = true;
    bool legDay = true;
    bool chestDay = true;
    bool backDay = true;
    bool latsDay = true;
    bool coreDay = true;

    targetDay(armDay, legDay, chestDay, backDay, latsDay, coreDay);

    return 0;
}
