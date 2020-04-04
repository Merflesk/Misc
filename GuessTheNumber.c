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
    // printf("%d\n", nSecretNum);

    /* Start of the game: while loop */
    int nRound = 1; // TODO remove this so player doesn't see the correct num.
    while ( nRound <= nTries && win != 1){
        printf("Please guess a number between 0 and 99: ");
        scanf("%d", &nGuess);

        if (nGuess == nSecretNum){
            // The player won
            // printf("Eeey, you guessed it! Good job!\n ");
            win = 1; // This will break us out of the while loop
        } else {
            printf("I'm sorry, that's not it. You have %d tries left.\n", (nTries - nRound));

            // Add hints to the player
            int nGuessSecretDelta = nGuess -nSecretNum; // Find the diff between guess and secret
            // printf("%d\n",nGuessSecretDelta);
            // Display hint to user if their guess was too low or too high
            if (nGuessSecretDelta > 0){
                printf("Hint: Guess a lower number.\n");
            } else if (nGuessSecretDelta < 0){
                printf("Hint: Guess a higher number.\n");
            }
        }
        nRound ++;
    }
    if (nRound > nTries && win != 1){
        printf("You lose, you ran out of guesses!\n");
    } else {
        printf("You win! You guessed my secret number: %d\n", nSecretNum);
    }

    

    return 0;
}


/* Junk section */
            /*switch (nGuessSecretDelta)
            {
            // If diff between guess and secret is greater than 40 in either direction:
            case nGuessSecretDelta > 40 :
                printf("Your guess is too low.\n");
                break;
            case nGuessSecretDelta < -40 :
                printf("Your guess is too high.\n");
                break;
            case nGuessSecretDelta <= 10 :
            case nGuessSecretDelta >= -10 :
                printf("You are less than 10 away!\n");
                break;
            case nGuessSecretDelta >= 9 :
                printf("Guess a little higher...\n");
                break;
            case nGuessSecretDelta <= -9 :
                printf("Guess a little lower...\n");
                break;
            default:
                break;
            } */