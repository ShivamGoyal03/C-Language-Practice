// Stone Paper Scissor Game

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int StonePaperScissor(char you, char comp)
{
    if (you == comp)
    {
        return 0;
    }
    else if ((you == 's' && comp == 'c') || (you == 'c' && comp == 'p') || (you == 'p' && comp == 's'))
    {
        return 1;
    }
    else
    {
        return 2;
    }
}
int main()
{
    char you, comp;
    srand(time(0));
    int number = rand() % 100 + 1;
    if (number < 33)
    {
        comp = 's';
    }
    else if (number >= 33 && number < 66)
    {
        comp = 'p';
    }
    else
    {
        comp = 'c';
    }

    printf("Choose 's' for Stone, 'p' for Paper and 'c' for Scissor : ");
    scanf("%c", &you);
    int result = StonePaperScissor(you, comp);
    if (result == 0)
    {
        printf("Game Drawn\n");
    }
    else if (result == 1)
    {
        printf("You Won\n");
    }
    else
    {
        printf("You Lose\n");
    }
    printf("You Choose %c and computer choose %c\n", you, comp);
    return 0;
}