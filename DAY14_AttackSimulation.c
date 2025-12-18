#include <stdio.h>
#include <stdbool.h>
int main() {
    bool isFound = true;
    bool isScanned = true;
    bool isVulnerable = true;
    bool DDOS = true;
    bool attacked = true;
    bool isDown = true;

    printf("ATTACK SIMULATION\n");
    printf("target: mr johnson\n");
    if (isFound) {
        printf("Target victim found!\n");
        if (isScanned) {
            printf("Target scanned.\n");
            if (isVulnerable) {
                printf("Target vulnerabilities detected!\n");
                if (DDOS) {
                    printf("DDOS launched!\n");
                    if (attacked) {
                        printf("Attack on going.....\n");
                        if (isDown) {
                            printf("Status: target down.\n");
                        }
                        else {
                            printf("Status: Target not down\n");
                        }
                    }
                    else {
                        printf("Status: Attack failed,Abort.\n");
                    }
                }
                else {
                    printf("Status: DDOS was blocked,Abort.\n");
                }
            }
            else {
                printf("Status: failed to find vulnerability,Abort.\n");
            }
        }
        else {
            printf("Status: failed to scan,Abort\n");
        }
    }
    else {
        printf("Status: Target not found,Abort\n");
    }
    return 0;
}