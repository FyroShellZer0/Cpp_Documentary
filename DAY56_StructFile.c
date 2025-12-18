#include <stdio.h>
#include <stdlib.h>
typedef struct {
    char username[50];
    int age;
    double balance;
}User;
int main(void) {
    User user1 = {"jen", 16, 50.00};
    // write
    FILE *file = fopen("userdata.bin", "wb");
    if(!file) {
        printf("Could not opne file\n");
        return 1;
    }
    fwrite(&user1, sizeof(User), 1, file);
    fclose(file);
    file = NULL;

    // read
    User loaded;
    FILE *read = fopen("userdata.bin", "rb");
    if(!read) {
        printf("Could not open file\n");
        return 1;
    }
    fread(&loaded, sizeof(User), 1, read);
    fclose(read);
    read = NULL;
    printf("Username: %s\n", loaded.username);
    printf("Age: %d\n", loaded.age);
    printf("Balance: ₱%.2lf", loaded.balance);
    printf("\n");
    return 0;
}