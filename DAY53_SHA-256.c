#include <stdio.h>
#include <string.h>
#include <openssl/sha.h> // for SHA256 function + constants

int main(void) {
    char input[256];
    unsigned char hash[SHA256_DIGEST_LENGTH]; // We store the raw binary hash here.
    printf("Enter text to hash: ");
    fgets(input, sizeof(input), stdin);
    //input[strlen(input) - 1] = '\0';
    input[strcspn(input, "\n")] = 0;
    SHA256((unsigned char*)input, strlen(input), hash);
    printf("SHA-256: ");
    for(int i = 0; i < SHA256_DIGEST_LENGTH; i++) {
        printf("%02x", hash[i]); 
    }
    printf("\n");
    return 0;
}