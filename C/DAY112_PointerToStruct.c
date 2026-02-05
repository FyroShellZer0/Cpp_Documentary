#include <stdio.h>
#include <stdbool.h>
typedef struct{
    char name[24];
    int age;
}Person;
int main(void) {
    Person person1 = {"jen", 16};
    printf("Personal information: \n");
    printf("%s\n", person1.name);
    printf("%d\n", person1.age);
    return 0;
}