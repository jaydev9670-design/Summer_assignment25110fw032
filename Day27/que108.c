
// Create marksheet generation system. 

#include <stdio.h>

char calculateGrade(float percentage) {
    if (percentage >= 90) return 'A';
    if (percentage >= 75) return 'B';
    if (percentage >= 60) return 'C';
    if (percentage >= 40) return 'D';
    return 'F';
}

int main() {
    char name[50], grade;
    int roll, i;
    float marks[5], total = 0, percentage;

    printf("enter student name: ");
    scanf("%s", name);

    printf("enter roll number: ");
    scanf("%d", &roll);

    for (i = 0; i < 5; i++) {
        printf("enter marks of subject %d: ", i + 1);
        scanf("%f", &marks[i]);
        total += marks[i];
    }

    percentage = total / 5;
    grade = calculateGrade(percentage);

    printf("\nMARKSHEET\n");
    printf("student name: %s\n", name);
    printf("roll number: %d\n", roll);
    printf("total marks: %.2f\n", total);
    printf("percentage: %.2f%%\n", percentage);
    printf("grade: %c\n", grade);

    return 0;
}