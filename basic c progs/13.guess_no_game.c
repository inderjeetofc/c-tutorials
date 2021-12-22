#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int o_num, num, i;
    srand(time(0));
    o_num=rand()%(100 - 1 + 1)+ 1;
    char start;
    printf("welcome to Numberphile001 Game\n\nHow to play - :)\n1)Computer will think of a no. between 1-100\n2)Guess the no.in minimum no.of attempts to win");
    printf("\n\nHit enter to start the Game");
    scanf("%c", &start);
    if (start == 10)
    {
        printf("\n Computer has chosen a number\nGuess the number:-");
        for (i = 1; i; i++)
        {
            scanf("%d", &num);       
            if (num == o_num)
            {
                printf("\ncongratulations! You did it in %d attempts", i);
                break;
            }
            else if (num > o_num)
                printf("\nGuess low\n");
            else
                printf("\nGuess high\n");
        }
    }
    else
        printf("\nThankyou for coming visit again :)");
    return 0;
}