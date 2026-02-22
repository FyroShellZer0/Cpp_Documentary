#include <stdio.h>
#include <stdbool.h>
#include <string.h>

typedef struct {
    char name[32];
    int age;
    int month, day, year;
    char gender;
    char address[64];
    long phoneNum;
    char email[64];
    char nationality[32];
    char maritalStatus[32];
    char Religion[32];
    char motherName[32];
    char fatherName[32];
    char occupation[32];
    int income;
    char handedness[32];
    char interest[32];
    bool disease;
    char specifiedDisease[32];
} FORM;

void form(FORM person, const char* file){
    FILE *fp = fopen("informations.txt", "w");
    if(fp == NULL) {
        printf("error on writing file\n");
        return;
    }
    fprintf(fp, "Name: %s\n", person.name);
    fprintf(fp, "Age: %d\n", person.age);
    fprintf(fp, "Birthday: %02d/%02d/%04d\n", person.month, person.day, person.year);
    fprintf(fp, "Gender: %c\n", person.gender);
    fprintf(fp, "Address: %s\n", person.address);
    fprintf(fp, "Phone Number: %ld\n", person.phoneNum);
    fprintf(fp, "Email: %s\n", person.email);
    fprintf(fp, "Nationality: %s\n", person.nationality);
    fprintf(fp, "Marital Status: %s\n", person.maritalStatus);
    fprintf(fp, "Religion: %s\n", person.Religion);
    fprintf(fp, "Mother's Name: %s\n", person.motherName);
    fprintf(fp, "Father's Name: %s\n", person.fatherName);
    fprintf(fp, "Occupation: %s\n", person.occupation);
    fprintf(fp, "Income: %d\n", person.income);
    fprintf(fp, "Handedness: %s\n", person.handedness);
    fprintf(fp, "Interest: %s\n", person.interest);
    if (person.disease) {
        fprintf(fp, "Disease: Yes (%s)\n", person.specifiedDisease);
    } else {
        fprintf(fp, "Disease: No\n");
    }
    fclose(fp);
}

int main(void){
    FORM person;

    printf("Enter name: ");
    fgets(person.name, sizeof(person.name), stdin);
    person.name[strcspn(person.name, "\n")] = '\0';

    printf("Age: ");
    scanf("%d", &person.age);
    getchar(); // consume newline

    printf("Birth date:\n");
    printf("Month: ");
    scanf("%d", &person.month);
    printf("Day: ");
    scanf("%d", &person.day);
    printf("Year: ");
    scanf("%d", &person.year);
    getchar(); // consume newline

    printf("Enter gender (M/F): ");
    scanf("%c", &person.gender);
    getchar(); // consume newline

    printf("Enter address: ");
    fgets(person.address, sizeof(person.address), stdin);
    person.address[strcspn(person.address, "\n")] = '\0';

    printf("Enter phone number: ");
    scanf("%ld", &person.phoneNum);
    getchar();

    printf("Enter email: ");
    fgets(person.email, sizeof(person.email), stdin);
    person.email[strcspn(person.email, "\n")] = '\0';

    printf("Enter nationality: ");
    fgets(person.nationality, sizeof(person.nationality), stdin);
    person.nationality[strcspn(person.nationality, "\n")] = '\0';

    printf("Enter marital status: ");
    fgets(person.maritalStatus, sizeof(person.maritalStatus), stdin);
    person.maritalStatus[strcspn(person.maritalStatus, "\n")] = '\0';

    printf("Enter religion: ");
    fgets(person.Religion, sizeof(person.Religion), stdin);
    person.Religion[strcspn(person.Religion, "\n")] = '\0';

    printf("Enter mother's name: ");
    fgets(person.motherName, sizeof(person.motherName), stdin);
    person.motherName[strcspn(person.motherName, "\n")] = '\0';

    printf("Enter father's name: ");
    fgets(person.fatherName, sizeof(person.fatherName), stdin);
    person.fatherName[strcspn(person.fatherName, "\n")] = '\0';

    printf("Enter occupation: ");
    fgets(person.occupation, sizeof(person.occupation), stdin);
    person.occupation[strcspn(person.occupation, "\n")] = '\0';

    printf("Enter income: ");
    scanf("%d", &person.income);
    getchar();

    printf("Enter handedness (Right/Left): ");
    fgets(person.handedness, sizeof(person.handedness), stdin);
    person.handedness[strcspn(person.handedness, "\n")] = '\0';

    printf("Enter interest: ");
    fgets(person.interest, sizeof(person.interest), stdin);
    person.interest[strcspn(person.interest, "\n")] = '\0';

    char disease;
    printf("Do you have a disease? (Y/N): ");
    scanf("%c", &disease);
    if(disease == 'Y') {
        person.disease = true;
    }
    else {
        person.disease = false;
    }
    getchar();

    if(person.disease){
        printf("Specify the disease: ");
        fgets(person.specifiedDisease, sizeof(person.specifiedDisease), stdin);
        person.specifiedDisease[strcspn(person.specifiedDisease, "\n")] = '\0';
    }

    form(person, "informations.txt");
    printf("Success!\n");
    
    return 0;
}
