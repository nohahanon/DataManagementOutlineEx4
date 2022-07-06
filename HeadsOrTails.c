#include <stdio.h>
#include <stdlib.h>
int main()
{
    int numOfAll = 3, numOfHeads = 0;
    printf("Tossing a coin...\n");
    for (int i = 0; i < numOfAll; i++)
    {
        printf("Round %d:", i + 1);
        if (rand() % 2 == 0)
        {
            printf(" Heads\n");
            numOfHeads++;
        }
        else
            printf(" Tails\n");
    }
    printf("Heads: %d, Tails: %d\n", numOfHeads, numOfAll - numOfHeads);
    return 0;
}