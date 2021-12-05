#include <stdio.h>
int main()
{
    int multiTable[3][10];
    int num[] = {2, 7, 9};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            multiTable[i][j] = num[i] * (j + 1); // FUnction Callout
            printf("%u \n", &multiTable[i][j]);  // Print address of every number
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%d ", multiTable[i][j]); // Prints table
        }
        printf("\n");
    }
    return 0;
}