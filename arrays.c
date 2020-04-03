#include <stdio.h>

int main(void)
{
    int nArray[9];

    int i;
    for (i = 0; i < 9; i++){
        nArray[i] = i;
        printf("%d added to array \n", i);
    }

    return 0;

}
