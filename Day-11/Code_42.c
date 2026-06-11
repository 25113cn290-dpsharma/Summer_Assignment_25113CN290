/* Write a program to Write function to find maximum. */

#include <stdio.h>
int max(int a,int b)
    {
        return a>b?a:b;
    }
int main()
{
    int x,y,maximum;
    printf("Enter the two numbers : ");
    scanf("%d %d",&x,&y);
    maximum=max(x,y);
    printf("MAXIMUM OF TWO NUMBERS = %d\n",maximum);
    return 0;
}