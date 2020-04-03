/* 
 * Author: Joachim Larsen Mathisen
 * 
 * Program: Guess the Number
 * Learning C - A reason to use While loops!
 */

#include <stdio.h>
#include <stdlib.h>
#include <jlmlib.h>

int main()
{
    /* Declare variables */
    int nTheNumber = (rand() % 50);

    // clear the screen
    clearScreen();

    // Print the random number:
    printf("%d", nTheNumber);
    return 0;
}
