#include <stdio.h>
#include <stdbool.h>
int main() {
    bool isSafe = true;
    bool hasVulnerability = false;
    bool portsOpen = false;
    if (isSafe && !hasVulnerability && !portsOpen) {
        printf("Connection secured!\n");
    }
    else {
        if (!isSafe) {
            printf("Connection not safe!\n");
        }
        if (hasVulnerability) {
            printf("Vulnerability detected!\n");
        }
        if  (portsOpen) {
            printf("Open ports detected!\n");
        }
    }


    return 0;
}
