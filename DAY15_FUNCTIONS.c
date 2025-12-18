#include <stdio.h>
#include <string.h>
void HappyBirthday(char birthdayboi[], char name[], int age) { // we need a matching set of parameters,so that functions are set up to receive those arguements
    printf("HAPPY BIRTHDAY TO YOU...\n");
    printf("HAPPY BIRTHDAY TO YOU...\n");
    printf("HAPPY BIRTHDAY DEAR %s\n", birthdayboi); // you can rename the data you are receiving
    printf("HAPPY BIRTHDAY TO YOU.\n");
    printf("%s, You are now %d years old!\n", name, age);
}
int main() {

    //functions = a reusable section of code that can be invoked "called"
    //arguements can be sent to a function so that it can use them

    //HappyBirthday();  THIS IS HOW TO CALL THE FUNCTION
    char name[30] = ""; 
    char nickname[30] = "";
    int age = 0;

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';
    printf("Enter your nickname: ");
    fgets(nickname, sizeof(nickname), stdin);
    nickname[strlen(nickname) - 1] = '\0';
    printf("Enter your age: ");
    scanf("%d", &age);
    
    // we have to pass the arguements to the function
    HappyBirthday(nickname, name, age); //name and age are arguements variables to pass to the function
    
    return 0;
}