//create number guessing game
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess, attempts = 0;
    srand(time(0));
    number = rand() % 100 + 1;

    printf("Guess the number between 1 and 100:\n");

    while (1) {
        scanf("%d", &guess);
        attempts++;

        if (guess == number) {
            printf("Congratulations! You guessed the number in %d attempts.\n", attempts);
            break;
        } else if (guess < number) {
            printf("The number is higher. Try again.\n");
        } else {
            printf("The number is lower. Try again.\n");
        }
    }

    return 0;
}