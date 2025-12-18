#include <stdio.h>

int main() {

    //array = a fixed size collection of elemets of the same data type
    //(similar to a variable but it holds more than 1 value)

    int numbers[] = {10, 20, 30, 40, 50};

    printf("%d\n", numbers[0]); // computer starts with 0 but it represents the first value = 10
    printf("%d\n", numbers[1]); // 20
    printf("%d\n", numbers[2]); // 30
    printf("%d\n", numbers[3]); // 40
    printf("%d\n", numbers[4]); // 50
    printf("%d\n", numbers[5]); // if we try to call a value that doesnt exit,it prints garbage value
    printf("------------------------------------------\n");

    //                0    1    2    3    4
    char grades[] = {'A', 'B', 'C', 'D', 'F'};
    printf("%c\n", grades[2]);

    printf("------------------------------------------\n");

    //             0123
    char name[] = "Fyro\n";
    printf("%c\n", name[0]);

    printf("------------------------------------------\n");

    //YOU CAN ALSO CHANGE THE VALUES
    int Numbers[] = {10, 20, 30, 40, 50};

    Numbers[0] = 100;
    Numbers[1] = 90;
    Numbers[2] = 80;
    Numbers[3] = 50;
    printf("%d\n", Numbers[0]);
    printf("%d\n", Numbers[1]);
    printf("%d\n", Numbers[2]);
    printf("%d\n", Numbers[3]);

    printf("------------------------------------------\n");
    //IF WE NEED TO DISPLAY ALL THE ELEMENTS OF AN ARRAY,WE NEED TO USE A LOOP
    for(int i = 0;i < 5; i++) {
        printf("%c ", grades[i]);
    }

    printf("\n------------------------------------------\n");
    for(int i = 0; i < 5; i++) {
        printf("%d\n", numbers[i]);
    }

    printf("------------------------------------------\n");
    for (int i = 0; i < 4; i++) {
        printf("%c", name[i]);
    }
    printf("\n------------------------------------------\n");
    //WHAT IF WE ADD NEW VALUE IN THE ARRAY?
    //WE MIGHT NEED TO MANUALLY CHANGE IT
    //BUT WE CAN USE sizeof

    
    int tens[] = {10, 20, 30, 40, 50, 60, 70};

    printf("%d\n", sizeof(tens)); //it will give the size of the array in bytes
    printf("%d\n", sizeof(tens[0])); // will give the size of 1 element 
    //if we devide the size of the array and value of 1 element you will calculate the number of element in the array


    int size = sizeof(tens) / sizeof(tens[0]); // calculates the number of element in the array
    for(int i = 0; i < size; i++){
        printf("%d ", tens[i]);
    } // SO NOW ITS FLEXIBLE
    
    return 0;
}