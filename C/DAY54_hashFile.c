#include <stdio.h>
#include <openssl/sha.h>

int main(void) {
    unsigned char hash[SHA256_DIGEST_LENGTH];
    unsigned char buffer[1024];
    size_t bytesRead;
    FILE *file = fopen("ToHash.txt", "rb");
    if(!file) {
        printf("Cannot open file\n");
        return 1;
    }
    SHA256_CTX sha256;
    SHA256_Init(&sha256);
    while((bytesRead = fread(buffer, 1, sizeof(buffer), file)) != 0){
        SHA256_Update(&sha256, buffer, bytesRead);
    }
    SHA256_Final(hash, &sha256);
    printf("\n");
    fclose(file);
    file = NULL;
    for(int i = 0; i < SHA256_DIGEST_LENGTH; i++) {
        printf("%02x", hash[i]);
    }
    return 0;
}