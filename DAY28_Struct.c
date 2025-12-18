#include <stdio.h>
#include <stdbool.h>
#include <string.h>
typedef struct {
    char name[50];
    int age;
    float gpa;
    bool isFullTime;
}Student;
void printStudents (Student student);
int main() {

    //  struct = a custom container that holds multiple
    //  pieces of related information.
    //  similar to objects in another languages

    Student student1 = {"Spongebob", 30, 3.0, true};
    Student student2 = {"Patrick", 36, 1.0, false};
    Student student3 = {"Squidward", 40, 3.2, true};
    Student student4; //GIVES GARBAGE VALUE FROM THE PREVIOUS PROGRAM
    Student student5 = {0}; // CLEARS THE LEFT OVER GARBAGE
    
    //if you declare a struct and want to declare values later,heres how
    Student student6 = {0};
    strcpy(student6.name, "Sandy");
    student6.age = 27;
    student6.gpa = 4,0;
    student6.isFullTime = true;


    printStudents(student1);
    printStudents(student2);
    printStudents(student3);
    printStudents(student4);
    printStudents(student5);
    printStudents(student6);
    return 0;
}

void printStudents (Student student) {
    printf("\nname: %s\n", student.name);
    printf("age: %d\n", student.age);
    printf("gpa: %.1f\n", student.gpa);
    //printf("%d\n", student1.isFullTime);  0 or 1
    printf("full timer: %s\n", (student.isFullTime) ? "YES" : "NO");
    printf("\n");
}