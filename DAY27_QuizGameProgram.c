#include <stdio.h>

int main() {

    //QUIZ GAME
    char questions [][200] = {"What is the largest planet in the solar system?",
                              "What is the hottest planet in the solar system?",
                              "What do you call the disk that is floating on the space and contains a sample of earh sounds, pictures, music?",
                              "When looking at the stars at night, why are they from the past?" };
    char options [][200] = {"A. Jupiter\nB. Saturn\nC. Uranus\nD.Neptune\n",
                            "A. Venus\nB. Saturn\nC. Mercury\nD.Neptune\n", 
                            "A. Life Disk\nB. Earth existence\nC. Golden record\nD.World record\n",
                            "A. Because stars are heavy\nB.We still didnt discovered it yet\nC. Because the mass of the stars reflects slow\nD. Because the light travels at a finite speed\n"};
    char answerKey[] = {'A', 'A', 'C', 'D'};
    int questioncount = sizeof(questions) / sizeof(questions[0]);
    int optionscount = sizeof(options) / sizeof(options[0]);
    

    char userAnswer = '\0';
    int score = 0;
    printf("***ASTRONOMY QUIZ!***\n");
    for (int i = 0; i < questioncount; i++) {
        printf("\n%s\n", questions[i]);
        printf("\n%s\n", options[i]);
        printf("Enter your choice: ");
        scanf(" %c", &userAnswer);
    
        if(userAnswer == answerKey[i]) {
            printf("Correct!\n+1\n");
            score++;
            printf("%d\n", score);
        }
        else{
            printf("Incorrect!\n-1\n");
            score--;
        }
    }
    if (score > 0) {
        printf("Your score is %d!\n", score);
    }
    else if(score < 0) {
        printf("Game Over!\n");
    }
    
    return 0;
}