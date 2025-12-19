#include <stdio.h>  

int main(void) {
    
    // fread  | "rb" =  read bytes
    // fwrite | "wb" = write bytes
    FILE *file = fopen("data.bin", "wb");
    if(!file) {
        printf("Cannot open file\n");
        return 1;
    }
    unsigned char bytes[] = {0x41, 0x42, 0x43, 0xFF};
    // 0x41 = 'A', 0x42 = 'B', 0x43 = 'C', 0xFF = 255

    fwrite(bytes, sizeof(unsigned char), sizeof(bytes), file);
    fclose(file);
    return 0;
}