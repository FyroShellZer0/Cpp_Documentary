#include <stdio.h>

int main(void) {
    FILE *file = fopen("data.bin", "rb");
    if(!file) {
        printf("Cannot open file\n");
        return 1;
    }
    unsigned char buffer[10];
    int bytesRead = fread(buffer, 1, sizeof(buffer), file);
    printf("Read %d bytes\n", bytesRead);
    for(int i = 0; i < bytesRead; i++) {
        printf("%02x ", buffer[i]);
    }
    printf("\n");
    fclose(file);
    return 0;
}