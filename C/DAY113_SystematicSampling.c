#include <stdio.h>
typedef struct {
    char name[16];
    int age;
}Person;

int main(void) {
    Person population[] = {
                          {"joseph", 20}, {"ninja", 22}, {"jezreel", 21}, 
                          {"jez", 19}, {"jezzy", 23}, {"tim", 25}, 
                          {"ezile", 24}, {"shann", 20}, {"jes", 22}, 
                          {"rico", 23}, {"leo", 25}, {"joey", 22}
                        };
                        
                        //systematic sampling: 3rd
                        int size = sizeof(population)/sizeof(population[0]);
                        for(int i = 2; i < size; i+=3) {
                            printf("sample:\nname: %s\nage: %d\n", population[i].name, population[i].age);
                        }
    return 0;
}