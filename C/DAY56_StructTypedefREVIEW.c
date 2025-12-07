#include <stdio.h>
#include <string.h>
typedef struct{
    char name[50];
    int age;
    int month;
    char monthname[20];
    int day;
    int year;
}form; // container at the bottom along with the semi-colon
const char* birthdayMonth(int month);
int main(void){
    form applicant; // REMOVED "struct"
    printf("Enter your name: ");
    fgets(applicant.name, sizeof(applicant.name), stdin);
    applicant.name[strcspn(applicant.name, "\n")] = 0;
    
    printf("Enter your age: ");
    scanf("%d", &applicant.age);
    getchar();
    
    printf("Birthdate\n");
    printf("Enter number of month: ");
    scanf("%d", &applicant.month);
    strcpy(applicant.monthname, birthdayMonth(applicant.month));
    getchar();
    printf("Enter number of day: ");
    scanf("%d", &applicant.day);
    getchar();
    printf("Enter number of year: ");
    scanf("%d", &applicant.year);
    getchar();
    
    printf("Information\n");
    printf("Name: %s\n", applicant.name);
    printf("Age: %d\n", applicant.age);
    printf("Date of Birth: %s %d %d\n",applicant.monthname, applicant.day, applicant. year);
    printf("\n");

    return 0;
}
const char* birthdayMonth(int month) {
    const char *months[] = {
        "Invalid", "January", "February", "March", "April",
        "May", "June", "July", "August",
        "September", "October", "November", "December"
    };
    if(month < 1 || month > 12) return "Invalid";
    return months[month];
    
}