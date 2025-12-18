#include <stdio.h>

int main() {

    //2D array = An array where each element is an array
    //          array[][] = {{}, {}, {}};

    // 1D array
    //   int numbers[] = {1, 2, 3};

    //TO MAKE A 2D ARRAY
    int numbers[][3] = {{1, 2, 3}, //we have to put the maximum size for
                        {4, 5, 6}, //the number of columns which is 3
                        {7, 8, 9},
                        {10, 11, 12}};
    printf("%d ", numbers[0][0]); // the first set of straight brackets corresponds
    //to the row number(first {})

    // the second set of straight brackets corresponds to the column
    printf("%d ", numbers[0][1]); // row 0,column 1 = 2
    printf("%d\n", numbers[0][2]);

    printf("%d ", numbers[1][0]);
    printf("%d ", numbers[1][1]);
    printf("%d\n", numbers[1][2]);

    printf("%d ", numbers[2][0]);
    printf("%d ", numbers[2][1]);
    printf("%d\n", numbers[2][2]);

    //using nested loops we can display all the elements of the array

    for(int i = 0; i < 4; i++) {//rows
        for(int j = 0; j < 3; j++) {//column
            printf("%d ", numbers[i][j]);
        }
        printf("\n");
    }
    return 0;

}