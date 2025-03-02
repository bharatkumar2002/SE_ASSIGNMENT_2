#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secretNumber, guess, attempts = 0, maxAttempts = 10;
    
    // Initialize random number generator
    srand(time(0));

    // Generate a random number between 1 and 100
    secretNumber = rand() % 100 + 1;
    
    printf("Welcome to the Number Guessing Game!\n");
    printf("I have selected a number between 1 and 100. You have %d attempts to guess it.\n", maxAttempts);
    
    // Game loop - user has a limited number of attempts
    while (attempts < maxAttempts) {
        printf("\nAttempt %d of %d. Enter your guess: ", attempts + 1, maxAttempts);
        scanf("%d", &guess);
        
        // Increment the number of attempts
        attempts++;
        
        // Check if the guess is correct, too high, or too low
        if (guess < secretNumber) {
            printf("Your guess is too low!\n");
        } else if (guess > secretNumber) {
            printf("Your guess is too high!\n");
        } else {
            printf("Congratulations! You guessed the correct number %d in %d attempts.\n", secretNumber, attempts);
            break;
        }
        
        // Check if the player has run out of attempts
        if (attempts == maxAttempts) {
            printf("\nSorry! You've used all your attempts. The correct number was %d.\n", secretNumber);
        }
    }
    
    return 0;
}

