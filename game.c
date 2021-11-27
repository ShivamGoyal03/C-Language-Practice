#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int number, guess, nGuess=1;
    srand(time(0));
    number=rand()%101+1;

    do
    {
        printf("Guess the number between 1 to 100\n");
        scanf("%d",&guess);
        if (guess>number)
        {
            printf("Hint: Choose Lower Please\n");
        }
        else if (guess<number)
        {
            printf("Hint: Choose Higher Please\n");
        }
        else
        {
            printf("That's Correct! \n You Took %d attempts to guess it",nGuess);
        }
            nGuess++;
    } while (guess!=number);
    
    return 0;
}
