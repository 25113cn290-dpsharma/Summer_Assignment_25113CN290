/* Write a program to Write function to find sum of two numbers. */

#include <stdio.h>
int sum(int a,int b)
    {
        return a+b;
    }

int main()
{
    int x,y,add;
    printf("Enter the two numbers : ");
    scanf("%d %d",&x,&y);
    add=sum(x,y);
    printf("SUM OF TWO NUMBERS = %d\n",add);
    return 0;
}