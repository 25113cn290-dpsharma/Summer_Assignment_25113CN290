/* Write a program to Write function to find factorial. */

#include <stdio.h>
int fact(int a)
    {
        int i,fact=1;
        for(i=a;i>=1;i--)
            {
                fact=fact*i;
            }
        return fact;
    }
int main()
{
    int x,factorial;
    printf("Enter the numbers : ");
    scanf("%d",&x);
    factorial=fact(x);
    printf("FACTORIAL = %d\n",factorial);
    return 0;
}