#include <stdio.h>

struct Student {
    char Name[20];
    char ID[5];
    float ScoreSub1;
    float ScoreSub2;
    float ScoreSub3;
    float ScoreSub4;
    float ScoreSub5;
} typedef S;

char getGrade(float score) {
    if (score >= 80) return 'A';
    else if (score >= 75) return 'B+';
    else if (score >= 70) return 'B';
    else if (score >= 65) return 'C+';
    else if (score >= 60) return 'C';
    else if (score >= 55) return 'D+';
    else if (score >= 50) return 'D';
    else return 'F';
}

int main() {
    S students[3];

    for (int i = 0; i < 3; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: \n");
        scanf(" %[^\n]s", students[i].Name);  
        printf("ID: \n");
        scanf("%s", students[i].ID);
        printf("Scores in Subject 1: \n");
        scanf("%f", &students[i].ScoreSub1);
        printf("Scores in Subject 2: \n");
        scanf("%f", &students[i].ScoreSub2);
        printf("Scores in Subject 3: \n");
        scanf("%f", &students[i].ScoreSub3);
        printf("
