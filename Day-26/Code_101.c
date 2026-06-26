// Write a program to Create number guessing game.

#include<stdio.h>
#include<stdlib.h>
#include <time.h>
int main()
{   
    srand(time(NULL));
    int num = rand()%100+1;
    int guess,guesscount=0;

    while(num!=guess)
        {   
            guesscount++;
            printf("Enter your guess : ");
            scanf("%d",&guess);
            if(guess<num)
                {
                    printf("Think of a bigger number \n");
                }
            else if(guess>num)
                {
                    printf("Think of a smaller number \n");
                }
            else
                {
                    printf("congratulations !! You guessed it \n");
                }
        }
    
    printf("You guessed the number in %d turns \n",guesscount);
    return 0;
}