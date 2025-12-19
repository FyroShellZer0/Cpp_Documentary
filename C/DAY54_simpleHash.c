#include <stdio.h>
#include <openssl/sha.h>
#include <string.h>
int main(void) {
    unsigned char hash[SHA256_DIGEST_LENGTH];
    char input[] = "HAHA";
    SHA256((unsigned char*)input, strlen(input), hash);
    printf("Hashed value: ");
    for(int i = 0; i < SHA256_DIGEST_LENGTH;i++) printf("%02x", hash[i]);
    printf("\n");
    return 0;
}