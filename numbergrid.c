/*
 * The idea of this program is to generate 9 3x3 grids with numbers.
 * One of the 3x3 grids can the look like:
 * 00 01 02
 * 03 04 05
 * 06 07 08
 * 
 */

#include <stdio.h>

int main()
{
    int array[9][3][3];
    int a,b,c,i;

/* Initialize the multidimensional array */
    i = 0;
    for(a=0;a<9;a++)
        for(b=0;b<3;b++)
            for(c=0;c<3;c++)
                array[a][b][c] = i++;

/* Display the multidimensional array */
    // for each c we print a, a+1 and a+2, thus we increment a by 3 for each loop
    for (a = 0; a < 9; a +=3){
        for (b = 0; b < 3; b++){
            printf("\n");
            for (c = 0; c < 3; c++){
                // c loop 1
                // prints 3x3 grid in [a]'s index array[a][b][c]
                printf("%2d ", array[a][b][c]);  
            }
            printf("\t");
            for (c = 0; c < 3; c++){
                // c loop 2
                // the next 3x3 grid in the next index [a]
                printf("%2d ", array[a+1][b][c]); 
                
            }
            printf("\t");
            for (c = 0; c < 3; c++){
                // c loop 3
                // the third 3x3 grid in the next index [a]
                printf("%2d ", array[a+2][b][c]); 
                
            }printf("\n");                     
        }printf("\n");
    }

    return(0);
}