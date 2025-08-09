#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    const int MIN = 1;
    const int MAX = 100;
    int guess;
    int guesses = 0;  
    int answer;
    srand(time(0));

    answer = (rand() % MAX) + MIN;

    printf("=== Number Guessing Game ===\n");
    printf("Guess a number between %d and %d\n", MIN, MAX);

    do {
        printf("\nEnter your guess: ");
        scanf("%d", &guess);
        guesses++;

        if (guess > answer) {
            printf("Too high! Try again.");
        } 
        else if (guess < answer) {
            printf("Too low! Try again.");
        } 
        else {
            printf("Correct! \n");
        }

    } while (guess != answer);

 
    printf("\nThe answer was: %d", answer);
    printf("\nNumber of guesses: %d\n", guesses);

    return 0;
}