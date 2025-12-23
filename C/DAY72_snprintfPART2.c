#include <stdio.h>

int main(void) {
    char buffer[10];
    int year = 2025;
    char *name = "tim";
    int result = snprintf(buffer, sizeof(buffer), "Hello, %s, the year is %d\n", name, year);
    printf("buffer: %s\n", buffer);
    printf("result: %d (would write %d chars)\n", result, result);
    printf("buffer size: %lu\n", sizeof(buffer));
    for (int i = 0; i < result; i++) {
        printf("%c", buffer[i]);
    }
    /*
    But buffer is only 10 bytes, so snprintf writes:
    buffer[0] = 'H'
    buffer[1] = 'e'
    buffer[2] = 'l'
    buffer[3] = 'l'
    buffer[4] = 'o'
    buffer[5] = ','
    buffer[6] = ' '
    buffer[7] = 't'
    buffer[8] = 'i'      // 9th character
    buffer[9] = '\0'     // 10th byte = null terminator
    */
    return 0;
}