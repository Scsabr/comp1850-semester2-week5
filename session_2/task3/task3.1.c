// Week 5, Session 2

/* Task 3.1
 * Number Guessing Game
 * A program where the computer selects a random number and the person tries to guess it
 */

#include <stdio.h>
#include <stdlib.h> // For rand(), srand(), atoi()
#include <time.h>   // For time()
#include <string.h> // For strcspn()

int main(void)
{
    char input[20]; // Buffer for input
    char repeat;
    int guess, check; // The person's guess
    int target;       // The random number to guess
    int num_guesses;  // Counter for number of guesses
    int min = 1;      // Minimum value for random number
    int max = 100;    // Maximum value for random number
    int playing = 1;  // Flag to control the main game loop

    // Seed the random number generator
    srand(time(NULL));

    printf("=== Number Guessing Game ===\n");
    printf("I'm thinking of a number between %d and %d\n", min, max);

    target = min + rand() % (max - min + 1);

    do
    {
        // Reset number of guesses for a new game
        num_guesses = 0;

        while (guess != target)
        {
            printf("Enter your guess: ");
            fgets(input, 20, stdin);
            check = sscanf(input, "%d ", &guess);
            if (check - 1)
                continue;
            num_guesses++;
            if (num_guesses > 3)
            {
                printf("You guessed too %s\n", (guess > target) ? "high" : "low");
            }
        }


        printf("You got it yippee!\nGo again? y/n: ");
        fgets(input, 20, stdin);
        check = sscanf(input, "%c ", &repeat);
        playing = (check == 'y') ? 1 : 0;
    } while (playing);

    printf("\nThanks for playing!\n");
    return 0;
}
