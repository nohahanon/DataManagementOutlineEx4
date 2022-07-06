#include <stdio.h>
#include <stdlib.h>
int main()
{
    char *name;
    printf("Who are you?\n> ");
    scanf("%s", name);
    printf("Hello. %s!\n", name);

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
    printf("%s", numOfHeads < numOfAll - numOfHeads ? "You lost." : "You won.");
    return 0;
}