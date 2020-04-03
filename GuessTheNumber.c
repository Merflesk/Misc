/* 
 * Author: Joachim Larsen Mathisen
 * 
 * Program: Guess the Number
 * Learning C - A reason to use While loops!
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Declare variables */
    int nTheNumber = (rand() % 50);


    // Print the random number:
    printf("%d", nTheNumber);
    return 0;
}
