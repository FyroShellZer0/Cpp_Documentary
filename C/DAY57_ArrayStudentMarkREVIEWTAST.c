#include <stdio.h>
#include <stdlib.h>
int roundUp(double value);
typedef struct {
    double Filipino, PracticalResearch, TVL, Science, Literature, readingWriting, Math, Hope; 
}Subject;
int main(void) {
    Subject subject;
    char *sub[] = {"Filipino", 
                 "Practical Research", 
                 "TVL", 
                 " Science", 
                 "Literature", 
                 "Reading and Wrting", 
                 "MATH", 
                 "HOPE"};
    int n = sizeof(sub)/sizeof(sub[0]);
    for(int i = 0; i < n; i++){
        printf("Enter grade in %s: ", sub[i]);
        switch(i) {
            case 0:
                scanf("%lf", &subject.Filipino);
                break;
            case 1:
                scanf("%lf", &subject.PracticalResearch);
                break;
            case 2:
                scanf("%lf", &subject.TVL);
                break;
            case 3:
                scanf("%lf", &subject.Science);
                break;
            case 4:
                scanf("%lf", &subject.Literature);
                break;
            case 5:
                scanf("%lf", &subject.readingWriting);
                break;
            case 6:
                scanf("%lf", &subject.Math);
                break;
            case 7:
                scanf("%lf", &subject.Hope);
                break;
        }
    }
    double finalGrade = (subject.Filipino+subject.PracticalResearch+subject.TVL+subject.Science+subject.Literature+subject.readingWriting+subject.Math+subject.Hope) / 8;
    printf("Initial grade : %.1lf\n", finalGrade);
    finalGrade = roundUp(finalGrade);
    printf("Final grade: %.1lf", finalGrade);
    printf("\n");
    return 0;
}
int roundUp(double value) {
    if(value- (int)value >= 0.5) {
        return (int)value +1;
    }
    else{
        return (int)value;
    }
}