#include <stdio.h>

typedef struct{
    char model[25];
    int year;
    int price;
}Cars;
void printCars(Cars car);

typedef struct {
    char model[25];
    int year;
    int price;
}Car;
int main() {

    //  array of structs = array where each element contains a struct{}
        //helps organize and groups together related data
        //if you have many structs to work with you can stick them with an array
    Cars car01 = {"Porche", 2025, 250000};
    Cars car02 = {"Nissan", 2020, 220000};
    Cars car03 = {"Corvete", 2026, 68000};
    Cars car04 = {"Challenger", 2024, 29000};

    //WE HAVE SOME STRUCTS,THEY ARE NOT IN ARRAY YET

    printCars(car01);
    printCars(car02);
    printCars(car03);
    printCars(car04);
    printf("\n");
    //WHAT WE COULD DO IS STORE THESE STRUCTS WITHIN AN ARRAY FOR CONVINIENCE AND BETTER ORGANIZATION
    //made new struct "Car":
    Car cars[] = {{"Porche", 2025, 250000}, 
                  {"Nissan", 2020, 220000}, 
                  {"Corvete", 2026, 68000}, 
                  {"Challenger", 2024, 29000}};
    int size = sizeof(cars) / sizeof(cars[0]);
    for(int i = 0; i < size; i++){
        printf("%s %d $%d\n", cars[i].model, cars[i].year, cars[i].price);
    }

    return 0;
}
void printCars(Cars car) {
    printf("%s %d $%d\n", car.model, car.year, car.price);
}