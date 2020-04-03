/* 
 * Author: Joachim Larsen Mathisen
 * 
 * Program: Guess the Number
 * Learning C - A reason to use While loops!
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    /* Declare variables */
    int nSecretNum;
    int nGuess; 
    int win;
    int nTries = 5; // Player will have 5 tries.

    /* rand() will produce same numbers every run time.
     * Thus we must use a so-called 'seed' to seed the random sequence.
     * We can use the current time to make a pseudo random seed. */
    srand(time(0)); 
    nSecretNum = rand() % 100; // we add % 100 to set range from 0 to 99
    // Print random number:
    printf("%d\n", nSecretNum);

    /* Start of the game: while loop */
    int nRound = 1;
    while ( nRound <= nTries && win != 1){
        printf("Please guess a number between 0 and 99: ");
        scanf("%d", &nGuess);

        if (nGuess == nSecretNum){
            // The player won
            printf("Eeey, you guessed it! Good job!\n ");
            win = 1; // This will break us out of the while loop
        } else {
            printf("I'm sorry, that's not it. You have %d tries left.\n", (nTries - nRound));
        }
        nRound ++;
    }
    if (nRound > nTries && win != 1){
        printf("You lose, no more tries left.\n");
    } else {
        printf("You win! You guessed my secret number: %d\n", nSecretNum);
    }

    

    return 0;
}
