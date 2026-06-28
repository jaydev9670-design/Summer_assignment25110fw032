//create quiz application
#include <stdio.h>
int main() {
    int score = 0, answer;

    printf("Welcome to the Quiz Application!\n");

    printf("Question 1: What is the capital of India?\n");
    printf("1. lucknow\n2. mumbai\n3. new delhi\n4. kolkata\n");
    printf("Enter your answer (1-4): ");
    scanf("%d", &answer);
    if (answer == 3) {
        score++;
    }

    printf("Question 2: What is 5 + 7?\n");
    printf("1. 10\n2. 12\n3. 14\n4. 15\n");
    printf("Enter your answer (1-4): ");
    scanf("%d", &answer);
    if (answer == 2) {
        score++;
    }

    printf("Question 3: Which planet is known as the Red Planet?\n");
    printf("1. Earth\n2. Mars\n3. Jupiter\n4. Venus\n");
    printf("Enter your answer (1-4): ");
    scanf("%d", &answer);
    if (answer == 2) {
        score++;
    }

    printf("Your total score is: %d out of 3\n", score);

    return 0;
}